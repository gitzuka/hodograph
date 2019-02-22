#include "Hodograph.h"

Hodograph::Hodograph(QWidget *parent)
	: QMainWindow(parent), m_timerPhysics(new QTimer(this)), m_timerGraphs(new QTimer(this)), m_graphsPoints(180), m_graphsTimerStep(100),
	m_timerPhysStep(5)
{
	ui.setupUi(this);
	connectUI();
	initializeGraphs();
}

Hodograph::~Hodograph()
{

}

void Hodograph::connectUI() const
{
	connect(m_timerPhysics, SIGNAL(timeout()), &m_scene, SLOT(updatePhysics()));
	connect(m_timerPhysics, SIGNAL(timeout()), ui.openGLWidget, SLOT(update()));
	connect(m_timerGraphs, SIGNAL(timeout()), &m_scene, SLOT(getPhysicsData()));
	connect(&m_scene, SIGNAL(dataRequested(int, double, double, double)), this, SLOT(updateGraphs(int, double, double, double)));
	connect(ui.openGLWidget, SIGNAL(initializedGL(QOpenGLShaderProgram*)), this, SLOT(initialize(QOpenGLShaderProgram*)));
	connect(ui.openGLWidget, SIGNAL(paintedGL()), &m_scene, SLOT(draw()));
	connect(ui.openGLWidget, SIGNAL(resized(int, int)), &m_scene, SLOT(resizedWindow(int, int)));
	connect(ui.doubleSpinBox_l, SIGNAL(valueChanged(double)), &m_scene, SLOT(updateSpringLength(double)));
	connect(ui.doubleSpinBox_r, SIGNAL(valueChanged(double)), &m_scene, SLOT(updateCircleR(double)));
	connect(ui.doubleSpinBox_omega, SIGNAL(valueChanged(double)), &m_scene, SLOT(updateAngularVelocity(double)));
	connect(ui.doubleSpinBox_error, SIGNAL(valueChanged(double)), &m_scene, SLOT(updateError(double)));
}

void Hodograph::initializeGraphs()
{
	ui.plot_position->addGraph();
	ui.plot_acceleration->addGraph();
	ui.plot_phase->addGraph();
	ui.plot_speed->addGraph();
	ui.plot_position->graph(0)->setPen(QPen(Qt::green));
	ui.plot_phase->graph(0)->setPen(QPen(Qt::green));
	ui.plot_acceleration->graph(0)->setPen(QPen(Qt::green));
	ui.plot_speed->graph(0)->setPen(QPen(Qt::green));

	ui.plot_position->xAxis->setRange(0, 100);
	ui.plot_position->yAxis->setRange(0, 2);
	ui.plot_speed->xAxis->setRange(0, 100);
	ui.plot_speed->yAxis->setRange(-2, 2);
	ui.plot_acceleration->xAxis->setRange(0, 100);
	ui.plot_acceleration->yAxis->setRange(-20, 20);
	ui.plot_phase->xAxis->setRange(0, 2);
	ui.plot_phase->yAxis->setRange(-1, 1);


	ui.plot_position->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom);
	ui.plot_phase->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom);
	ui.plot_acceleration->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom);
	ui.plot_speed->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom);

	m_phaseCurve = new QCPCurve(ui.plot_phase->xAxis, ui.plot_phase->yAxis);
	m_timerGraphs->start(m_graphsTimerStep);
}

void Hodograph::initialize(QOpenGLShaderProgram* program)
{
	m_scene.initialize(program, ui.doubleSpinBox_r->value(), ui.doubleSpinBox_l->value(), ui.doubleSpinBox_omega->value());
	m_timerPhysics->start(m_timerPhysStep);

}

void Hodograph::updateGraphs(int index, double pos, double vel, double acc)
{
	double time = index * m_graphsTimerStep / 1000.0f;
	ui.plot_position->graph(0)->addData(time, pos);
	ui.plot_acceleration->graph(0)->addData(time, acc);
	ui.plot_speed->graph(0)->addData(time, vel);
	//if (m_phaseCurve->dataCount() > ui.spinbox_points->value())
	{
		while (m_phaseCurve->dataCount() > ui.spinbox_points->value())
		{
		m_phaseCurve->data()->remove(m_phaseCurve->dataSortKey(0));
		}
	}
	m_phaseCurve->addData(pos, vel);

	ui.plot_position->replot();
	ui.plot_acceleration->replot();
	ui.plot_speed->replot();
	ui.plot_phase->replot();
	
}
