#include "Spring.h"

Spring::Spring()
{
}

Spring& Spring::operator=(const Spring& other)
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
	m_color = other.m_color;
	initBuffer();
	return *this;
}

void Spring::setPositions(const QVector3D& leftPos, const QVector3D& rightPos)
{
	Vertex left = Vertex(leftPos, m_color);
	Vertex right = Vertex(rightPos, m_color);
	updateBufferData(0, &left, 1);
	updateBufferData(1, &right, 1);
}

void Spring::initialize(const QVector3D& leftPos, const QVector3D& rightPos, QOpenGLShaderProgram *program)
{
	m_program = program;
	m_indices.clear();
	m_vertices.clear();
	m_color = QVector3D(1, 1, 1);
	m_vertices.push_back(Vertex(leftPos, m_color));
	m_vertices.push_back(Vertex(rightPos, m_color));
	m_indices.push_back(0);
	m_indices.push_back(1);
}

QVector3D Spring::getColor() const
{
	return m_color;
}
