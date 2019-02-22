#pragma once
#include "Mesh.h"

class Spring : public Mesh
{
public:
	Spring();
	Spring & operator=(const Spring&);
	void setPositions(const QVector3D &leftPos, const QVector3D &rightPos);
	void initialize(const QVector3D &leftPos, const QVector3D &rightPos, QOpenGLShaderProgram *program);
	QVector3D getColor() const;

private:
	QVector3D m_color;
};
