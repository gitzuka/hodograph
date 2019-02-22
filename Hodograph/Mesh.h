#pragma once
#include <QOpenGLBuffer>
#include <QOpenGLVertexArrayObject>
#include <QOpenGLShaderProgram>
#include "Vertex.h"

class Mesh
{
public:
	Mesh();
	Mesh(const QVector<Vertex> &vertices, GLenum drawMode, QOpenGLShaderProgram *program);
	Mesh(const QVector<Vertex> &vertices,const QVector<GLushort> &indices, GLenum drawMode, QOpenGLShaderProgram *program);
	Mesh(const Mesh &);
	~Mesh();

	Mesh & operator=(const Mesh&);

	void createVertices(const QVector<Vertex> &vertices);
	void initBuffer();
	void updateBufferData(int offset, const Vertex *vertex, int count);
	void updateIndexBufferData(int offset, const GLushort *indices, int count);
	GLenum getDrawMode() const;
	int getVerticesCount() const;
	const QVector<Vertex> getVertices() const;
	const QVector<GLushort> getIndices() const;
	void draw(const QMatrix4x4 &projView);
	void translate(const QVector3D &pos);
	const QMatrix4x4& getModelMatrix() const;

protected:
	QMatrix4x4 m_modelMatrix;
	QVector<Vertex> m_vertices;
	QVector<GLushort> m_indices;
	QOpenGLShaderProgram *m_program;
	GLenum m_drawMode;

private:
	QOpenGLBuffer m_vertexBuffer;
	QOpenGLBuffer m_ibo;
	QOpenGLVertexArrayObject m_vao;
};
