#pragma once
#include <QVector3D>

class Vertex
{
public:
	Vertex();
	explicit Vertex(const QVector3D &position);
	Vertex(const QVector3D &position, const QVector3D &color);

	static const int PositionTupleSize = 3;
	static const int ColorTupleSize = 3;

	const QVector3D &getPosition() const;
	const QVector3D &getColor() const;
	void setPosition(QVector3D &position);
	void setColor(QVector3D &color);
	static int getPositionOffset();
	static int getColorOffset();
	static int getStride();


private:
	QVector3D m_position;
	QVector3D m_color;
};