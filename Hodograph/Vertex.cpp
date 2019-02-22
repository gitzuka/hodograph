#include "Vertex.h"

Vertex::Vertex()
{
}

Vertex::Vertex(const QVector3D &position) : m_position(position)
{
}

Vertex::Vertex(const QVector3D &position, const QVector3D &color) : m_position(position), m_color(color)
{
}

const QVector3D &Vertex::getPosition() const
{
	return  m_position;
}

const QVector3D &Vertex::getColor() const
{
	return m_color;
}

void Vertex::setPosition(QVector3D &position)
{
	m_position = position;
}

void Vertex::setColor(QVector3D &color)
{
	m_color = color;
}

int Vertex::getPositionOffset()
{
	return offsetof(Vertex, m_position);
}

int Vertex::getColorOffset()
{
	return offsetof(Vertex, m_color);
}

int Vertex::getStride()
{
	return sizeof(Vertex);
}
