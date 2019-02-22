#include "Mesh.h"
#include "Camera.h"

Mesh::Mesh() : m_drawMode(GL_LINES), m_program(nullptr)
{
}

Mesh::Mesh(const QVector<Vertex> &vertices, GLenum drawMode, QOpenGLShaderProgram *program)
	: m_vertices(vertices), m_drawMode(drawMode), m_program(program)
{
}

Mesh::Mesh(const QVector<Vertex>& vertices, const QVector<GLushort>& indices, GLenum drawMode,
	QOpenGLShaderProgram* program) : m_vertices(vertices), m_indices(indices), m_drawMode(drawMode), m_program(program)
{
}

Mesh::Mesh(const Mesh &orig)
{
	m_drawMode = orig.m_drawMode;
	int size = orig.m_vertices.size();
	m_vertices.reserve(size);
	int indSize = orig.m_indices.size();
	m_indices.reserve(indSize);
	for (int i = 0; i < size; ++i)
	{
		m_vertices.append(orig.m_vertices.at(i));
	}
	for (int i = 0; i < indSize; ++i)
	{
		m_indices.append(orig.m_indices.at(i));
	}
	//m_vertices = orig.m_vertices;
	m_program = orig.m_program;
	initBuffer();
}

Mesh::~Mesh()
{
	m_vao.destroy();
	m_vertexBuffer.destroy();
	m_ibo.destroy();
	m_program = nullptr;
}

Mesh &Mesh::operator=(const Mesh &other)
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
	initBuffer();
	return *this;
}

void Mesh::createVertices(const QVector<Vertex>& vertices)
{
	m_vertices.clear();
	m_vertices = vertices;
}

void Mesh::initBuffer()
{
	if (m_vertexBuffer.isCreated())
	{
		return;
	}
	m_program->bind();
	m_vertexBuffer = QOpenGLBuffer(QOpenGLBuffer::VertexBuffer);
	m_vertexBuffer.create();
	m_vertexBuffer.bind();
	m_vertexBuffer.setUsagePattern(QOpenGLBuffer::StaticDraw);
	m_vertexBuffer.allocate(m_vertices.constData(), m_vertices.size() * sizeof(Vertex));

	m_ibo = QOpenGLBuffer(QOpenGLBuffer::IndexBuffer);
	m_ibo.create();
	m_ibo.bind();
	m_ibo.setUsagePattern(QOpenGLBuffer::StaticDraw);
	m_ibo.allocate(m_indices.constData(), m_indices.size() * sizeof(GLushort));

	m_vao.create();
	m_vao.bind();
	m_program->enableAttributeArray(0);
	m_program->enableAttributeArray(1);
	m_program->setAttributeBuffer(0, GL_FLOAT, Vertex::getPositionOffset(), Vertex::PositionTupleSize, Vertex::getStride());
	m_program->setAttributeBuffer(1, GL_FLOAT, Vertex::getColorOffset(), Vertex::ColorTupleSize, Vertex::getStride());



	m_vao.release();
	m_vertexBuffer.release();
	m_ibo.release();
	m_program->release();
}

void Mesh::updateBufferData(int offset, const Vertex *vertex, int count)
{
	m_vertexBuffer.bind();
	m_vertexBuffer.write(offset * sizeof(Vertex), vertex, sizeof(Vertex) * count);
	m_vertexBuffer.release();
}

void Mesh::updateIndexBufferData(int offset, const GLushort* indices, int count)
{
	m_ibo.bind();
	m_ibo.write(offset * sizeof(GLushort), indices, sizeof(GLushort) * count);
	m_ibo.release();
}

GLenum Mesh::getDrawMode() const
{
	return m_drawMode;
}

int Mesh::getVerticesCount() const
{
	return m_vertices.count();
}

const QVector<Vertex> Mesh::getVertices() const
{
	return m_vertices;
}

const QVector<GLushort> Mesh::getIndices() const
{
	return m_indices;
}

void Mesh::draw(const QMatrix4x4 &projView)
{
	m_program->bind();
	m_vao.bind();
	m_vertexBuffer.bind();
	m_ibo.bind();
	m_program->setUniformValue(m_program->uniformLocation("MVP"), projView * m_modelMatrix);
	glDrawElements(m_drawMode, m_indices.size(), GL_UNSIGNED_SHORT, nullptr);
	m_ibo.release();
	m_vertexBuffer.release();
	m_vao.release();
	m_program->release();
}

void Mesh::translate(const QVector3D& pos)
{
	m_modelMatrix = Camera::createTranslation(pos);
}

const QMatrix4x4& Mesh::getModelMatrix() const
{
	return m_modelMatrix;
}
