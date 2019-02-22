#include "Physics.h"
#include <random>
#include <qmath.h>

Physics::Physics(): m_l(0.8f), m_r(0.5f), m_velocity(0.1f), m_error(0), m_acceleration(0), m_prevPosition(m_l),
                    m_position(m_l), m_nextPosition(0), m_deltaT(0.01f), m_angularVelocity(0), m_elapsedTime(0),
                    m_angle(0)
{
}

double Physics::getSpringL() const
{
	return m_l;
}

double Physics::getCircleR() const
{
	return  m_r;
}

double Physics::getVelocity() const
{
	return m_velocity;
}

double Physics::getError() const
{
	return m_error;
}

double Physics::getAcceleration() const
{
	return m_acceleration;
}

double Physics::getPosition() const
{
	return m_position;
}

float Physics::getAngle() const
{
	return m_angle;
}

void Physics::setError(double err)
{
	m_error = err;
	if (err > 0)
		m_distribution = std::normal_distribution<double>(0, m_error);
	else
		m_distribution = std::normal_distribution<double>(0);
}

void Physics::setSpringLength(double length)
{
	m_l = length;
}

void Physics::setCircleR(double length)
{
	m_r = length;
}

void Physics::setAngularVelocity(double velocity)
{
	m_angularVelocity = velocity;
}

void Physics::update()
{
	double l = m_l;
	if (m_error > 0)
	{
		l += m_distribution(m_generator);
	}
	m_elapsedTime += m_deltaT;
	m_angle = m_angularVelocity * m_elapsedTime * 2 * M_PI;
	//m_y1 = m_r * sin*(angle)
	m_nextPosition = m_r * cos(m_angle) + sqrt(l * l - m_r * m_r * sin(m_angle) * sin(m_angle));
	
	m_velocity = (m_nextPosition - m_position) / (2.0f * m_deltaT);
	m_acceleration = (m_nextPosition - 2.0f * m_position + m_prevPosition) / (m_deltaT * m_deltaT);
	m_prevPosition = m_position;
	m_position = m_nextPosition;

}
