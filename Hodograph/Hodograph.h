#ifndef HODOGRAPH_H
#define HODOGRAPH_H

#include <QtWidgets/QMainWindow>
#include "ui_hodograph.h"
#include "Scene.h"

class Hodograph : public QMainWindow
{
	Q_OBJECT

public:
	Hodograph(QWidget *parent = 0);
	~Hodograph();

	void connectUI() const;
	void initializeGraphs();

private:
	Ui::HodographClass ui;
	QTimer *m_timerPhysics;
	QTimer *m_timerGraphs;
	int m_graphsPoints;
	Scene m_scene;
	int m_graphsTimerStep;
	int m_timerPhysStep;
	QCPCurve *m_phaseCurve;

private slots:
	void initialize(QOpenGLShaderProgram *program);
	void updateGraphs(int index, double pos, double vel, double acc);
};

#endif // HODOGRAPH_H
