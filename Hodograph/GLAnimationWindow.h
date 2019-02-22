#pragma once
#ifndef GLANIMATIONWINDOW_H
#define GLANIMATIONWINDOW_H

#include <QOpenGLWidget>
#include <QOpenGLFunctions_4_5_Core>
#include <QDateTime>
#include <QOpenGLShaderProgram>

class GLAnimationWindow : public QOpenGLWidget, protected QOpenGLFunctions_4_5_Core
{
	Q_OBJECT
public:
	explicit GLAnimationWindow(QWidget *parent = 0);
	~GLAnimationWindow();

protected:
	void initializeGL();
	void paintGL();
	void resizeGL(int width, int height);
	void destroyGL();

private:
	QOpenGLShaderProgram *m_program;
	//int m_frameCount;
	//QTime m_frameTime;

signals:
	void paintedGL();
	void initializedGL(QOpenGLShaderProgram*);
	void resized(int width, int height);
	//void fpsUpdated(float);
};

#endif //GLANIMATIONWINDOW_H