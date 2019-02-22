#pragma once
#include "Mesh.h"
#include <QObject>
#include "Camera.h"
#include "Physics.h"
#include "Circle.h"
#include "Spring.h"

class Scene : public QObject
{
	Q_OBJECT
public:
	Scene();

	void initialize(QOpenGLShaderProgram *program, float radius, float springLength, float omega);

private:
	//std::vector<Mesh> m_meshes;
	float m_circleRadius;
	float m_springLength;
	Camera m_camera;
	Physics m_physics;
	Circle m_circle;
	Spring m_spring;
	Mesh m_bob;
	float m_springStartPosX;
	float m_bobLength;
	int m_slices;
	int m_timerCounter;
	QOpenGLShaderProgram *m_program;

	void createMeshes(QOpenGLShaderProgram *program);
	//QVector<Vertex> createCircle(int slices, float radius, QVector<GLushort> &indices) const;

private slots:
	void draw();
	void resizedWindow(int width, int height);
	void rotateCircle(double angle);
	void updatePhysics();
	void moveBob(float posX);
	void updateCircleR(double radius);
	void updateSpringLength(double radius);
	void updateAngularVelocity(double velocity);
	void updateError(double error);
	void getPhysicsData();

signals:
	void dataRequested(int, double, double, double);
};
