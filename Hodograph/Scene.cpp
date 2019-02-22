#include "Scene.h"
#include <qmath.h>

Scene::Scene()
{
}

void Scene::createMeshes(QOpenGLShaderProgram *program)
{
	/*const int circleSlices = 36;
	QVector<GLushort> circleInds;
	const QVector<Vertex> circle = createCircle(circleSlices, m_circleRadius, circleInds);
	float bobLenght = 0.1f;
	const QVector<Vertex> bob = { Vertex(QVector3D(-2 * bobLenght, bobLenght, 0), QVector3D(1, 0, 0)),
		Vertex(QVector3D(2 * bobLenght, bobLenght, 0), QVector3D(1, 0, 0)) ,
		Vertex(QVector3D(2 * bobLenght, -bobLenght, 0), QVector3D(1, 0, 0)),
		Vertex(QVector3D(-2 * bobLenght, -bobLenght, 0), QVector3D(1, 0, 0)) };
	const QVector<GLushort> springInds = { 0, 1 };
	const QVector3D bobSpringPos = QVector3D(bob.first().getPosition() + bob.last().getPosition());
	const QVector<Vertex> spring = { Vertex(circle.first().getPosition(), QVector3D(0, 1, 0)),
		Vertex(QVector3D(m_springLength, 0, 0), QVector3D(0, 1, 0)) };
	const QVector<GLushort> bobInds = { 0, 1, 1, 2, 2, 3, 3, 0 };*/
	
	/*m_meshes.emplace_back(Mesh(spring, springInds, GL_LINES, program));
	m_meshes.emplace_back(Mesh(bob, bobInds, GL_LINES, program));
	m_meshes.emplace_back(Mesh(circle, circleInds, GL_LINES, program));*/

	/*for (auto& mesh : m_meshes)
	{
		mesh.initBuffer();
	}*/

	m_bobLength = 0.2f;
	m_slices = 36;
	const QVector<Vertex> bob = { Vertex(QVector3D(-2 * m_bobLength, m_bobLength, 0), QVector3D(1, 0, 0)),
		Vertex(QVector3D(2 * m_bobLength, m_bobLength, 0), QVector3D(1, 0, 0)) ,
		Vertex(QVector3D(2 * m_bobLength, -m_bobLength, 0), QVector3D(1, 0, 0)),
		Vertex(QVector3D(-2 * m_bobLength, -m_bobLength, 0), QVector3D(1, 0, 0)) };
	const QVector<GLushort> bobInds = { 0, 1, 1, 2, 2, 3, 3, 0 };
	m_bob = Mesh(bob, bobInds, GL_LINES, program);
	m_bob.initBuffer();
	m_circle.initialize(m_circleRadius, m_slices, program);
	m_circle.initBuffer();
	m_springStartPosX = sqrt(m_springLength * m_springLength - m_circleRadius * m_circleRadius);
	m_spring.initialize(m_circle.getSpringVertexPos(), QVector3D(m_springStartPosX, 0, 0), program);
	m_spring.initBuffer();
	moveBob(m_springStartPosX);
}

void Scene::initialize(QOpenGLShaderProgram *program, float radius, float springLength, float omega)
{
	m_timerCounter = 0;
	m_physics.setAngularVelocity(omega);
	m_circleRadius = radius;
	m_springLength = springLength;
	m_program = program;
	createMeshes(program);
}

void Scene::draw()
{
	m_bob.draw(m_camera.m_projView);
	m_spring.draw(m_camera.m_projView);
	m_circle.draw(m_camera.m_projView);
	/*for (auto& mesh : m_meshes)
	{
		mesh.draw(m_camera.m_projView);
	}*/
}

void Scene::resizedWindow(int width, int height)
{
	m_camera.updateProjection(width, height);
}

void Scene::rotateCircle(double angle)
{
	m_circle.rotateCircle(angle);
}

void Scene::updatePhysics()
{
	m_physics.update();
	float rightX = m_physics.getPosition();
	moveBob(rightX);
	m_circle.rotateCircle(m_physics.getAngle());
	//QVector3D right = QVector3D(rightX, 0, 0);
	float lefty = m_physics.getCircleR() * sin(m_physics.getAngle());
	float leftx = m_physics.getCircleR() * cos(m_physics.getAngle());
	//QVector3D left = QVector3D(leftx, lefty, 0);
	m_spring.setPositions(QVector3D(leftx, lefty, 0), QVector3D(rightX, 0, 0));
}

void Scene::moveBob(float posX)
{
	m_bob.translate(QVector3D(posX + 2 * m_bobLength, 0, 0));
}

void Scene::updateCircleR(double radius)
{
	m_circleRadius = radius;
	m_physics.setCircleR(m_circleRadius);
	//m_circle = Circle();
	m_circle.initialize(m_circleRadius, m_slices, m_program);
	m_circle.updateBufferData(0, m_circle.getVertices().data(), m_circle.getVertices().count());
	Vertex v = Vertex(m_circle.getSpringVertexPos(), m_spring.getColor());
	m_spring.updateBufferData(0, &v, 1);

	//m_circle.updateIndexBufferData(0, m_circle.getIndices().constData(), m_circle.getIndices().count());
}

void Scene::updateSpringLength(double length)
{
	m_springLength = length;
	m_physics.setSpringLength(length);
	//m_spring = Spring();
	m_springStartPosX = sqrt(m_springLength * m_springLength - m_circleRadius * m_circleRadius);
	m_spring.initialize(m_circle.getSpringVertexPos(), QVector3D(m_springStartPosX, 0, 0), m_program);
	m_spring.updateBufferData(0, m_spring.getVertices().constData(), m_spring.getVertices().count());
	moveBob(m_springStartPosX);
	//m_spring.updateIndexBufferData(0, m_spring.getIndices().constData(), m_spring.getIndices().count());
	//m_spring.initBuffer();
}

void Scene::updateAngularVelocity(double velocity)
{
	m_physics.setAngularVelocity(velocity);
}

void Scene::updateError(double error)
{
	m_physics.setError(error);
}

void Scene::getPhysicsData()
{
	if (m_timerCounter < 2)
	{
	m_timerCounter++;
		return;
	}
	emit dataRequested(m_timerCounter, m_physics.getPosition(), m_physics.getVelocity(), m_physics.getAcceleration());
	m_timerCounter++;
}

//QVector<Vertex> Scene::createCircle(int slices, float radius, QVector<GLushort> &indices) const
//{
//	const QVector3D color = QVector3D(0, 0, 1);
//	QVector<Vertex> vertices;
//	const float alpha = 2 * M_PI / slices;
//	for (int i = 0; i < slices; ++i)
//	{
//		const float angle = alpha * i;
//		vertices.push_back(Vertex(QVector3D(radius * cos(angle), radius * sin(angle), 0), color));
//		indices.push_back(i);
//		indices.push_back(i);
//	}
//	indices.removeFirst();
//	indices.push_back(0);
//	vertices.push_back(Vertex(QVector3D(0, radius, 0), color));
//	indices.push_back(vertices.size() - 1);
//	vertices.push_back(Vertex(QVector3D(0, -radius, 0), color));
//	indices.push_back(vertices.size() - 1);
//	vertices.push_back(Vertex(QVector3D(radius, 0, 0), color));
//	indices.push_back(vertices.size() - 1);
//	vertices.push_back(Vertex(QVector3D(-radius, 0, 0), color));
//	indices.push_back(vertices.size() - 1);
//
//	return vertices;
//}
