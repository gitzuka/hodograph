#pragma once
#include "Mesh.h"

class Circle : public Mesh
{
public:
	Circle();

	Circle & operator=(const Circle& other);


	void initialize(float r, int slices, QOpenGLShaderProgram *program);
	void initialize(float r, int slices);

	void rotateCircle(double angle);
	QVector3D getSpringVertexPos() const;

private:
	float m_r;
	int m_slices;
	int m_springVertexId;
};
