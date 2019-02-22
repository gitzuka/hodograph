#include "GLAnimationWindow.h"
#include <QTimer>

GLAnimationWindow::GLAnimationWindow(QWidget* parent)
	: QOpenGLWidget(parent), m_program(nullptr)//, m_frameCount(0)
{
}

GLAnimationWindow::~GLAnimationWindow()
{
	makeCurrent();
	destroyGL();
}

void GLAnimationWindow::initializeGL()
{
	initializeOpenGLFunctions();
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);

	m_program = new QOpenGLShaderProgram();
	m_program->addShaderFromSourceFile(QOpenGLShader::Vertex, "C:/Users/Andrzej/Documents/Visual Studio 2015/Projects/Hodograph/Hodograph/linesObject.vert");
	m_program->addShaderFromSourceFile(QOpenGLShader::Fragment, "C:/Users/Andrzej/Documents/Visual Studio 2015/Projects/Hodograph/Hodograph/linesObject.frag");
	//m_program->addShaderFromSourceFile(QOpenGLShader::Fragment, ":/Hodograph/linesObject.frag");
	m_program->link();

	//m_frameTime.start();

	emit initializedGL(m_program);
}

void GLAnimationWindow::paintGL()
{
	glClear(GL_COLOR_BUFFER_BIT);
	//++m_frameCount;
	//if (m_frameTime.elapsed() >= 1000)
	//{
	//	emit fpsUpdated(m_frameCount /(static_cast<double>(m_frameTime.elapsed()) / 1000.0));
	//}
	emit paintedGL();
	update();
}

void GLAnimationWindow::resizeGL(int width, int height)
{
	//glViewport(0, 0, width, height);
	emit resized(width, height);
}

void GLAnimationWindow::destroyGL()
{
	delete m_program;
}