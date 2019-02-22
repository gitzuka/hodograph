#include "Circle.h"
#include <qmath.h>
#include "Camera.h"

Circle::Circle()
{
	m_drawMode = GL_LINES;
}

Circle& Circle::operator=(const Circle& other)
{
	m_drawMode = other.m_drawMode;
	int size = other.m_vertices.size();
	m_vertices.reserve(size);
	for (int i = 0; i < size; ++i)
	{
		m_vertices.append(other.m_vertices.at(i));
	}
	m_vertices = other.m_vertices;
	m_indices = other.m_indices;
	m_program = other.m_program;
	m_r = other.m_r;
	m_slices = other.m_slices;
	m_springVertexId = other.m_springVertexId;
	initBuffer();
	return *this;
}

void Circle::initialize(float r, int slices, QOpenGLShaderProgram *program)
{
	m_program = program;
	initialize(r, slices);
}

void Circle::initialize(float r, int slices)
{
	m_indices.clear();
	m_vertices.clear();
	m_r = r;
	m_slices = slices;
	const QVector3D color = QVector3D(0, 0, 1);
	const float alpha = 2 * M_PI / m_slices;
	for (int i = 0; i < m_slices; ++i)
	{
		const float angle = alpha * i;
		m_vertices.push_back(Vertex(QVector3D(m_r * cos(angle), m_r * sin(angle), 0), color));
		m_indices.push_back(i);
		m_indices.push_back(i);
	}
	m_indices.removeFirst();
	m_indices.push_back(0);
	m_vertices.push_back(Vertex(QVector3D(0, m_r, 0), color));
	m_indices.push_back(m_vertices.size() - 1);
	m_springVertexId = m_indices.at(m_indices.size() - 1);
	m_vertices.push_back(Vertex(QVector3D(0, -m_r, 0), color));
	m_indices.push_back(m_vertices.size() - 1);
	m_vertices.push_back(Vertex(QVector3D(m_r, 0, 0), color));
	m_indices.push_back(m_vertices.size() - 1);
	m_vertices.push_back(Vertex(QVector3D(-m_r, 0, 0), color));
	m_indices.push_back(m_vertices.size() - 1);
}

void Circle::rotateCircle(double angle)
{
	m_modelMatrix = Camera::createRotationZ(angle);
}

QVector3D Circle::getSpringVertexPos() const
{
	//QVector4D pos = m_modelMatrix * QVector4D(m_vertices.at(m_springVertexId).getPosition(), 1);
	return QVector3D(m_modelMatrix * QVector4D(m_vertices.at(m_springVertexId).getPosition(), 1));
}
