#pragma once
#include <random>

class Physics
{
public:
	Physics();

	double getSpringL() const;
	double getCircleR() const;
	double getVelocity() const;
	double getError() const;
	double getAcceleration() const;
	double getPosition() const;
	float getAngle() const;
	void setError(double err);
	void setSpringLength(double length);
	void setCircleR(double length);
	void setAngularVelocity(double velocity);
	void update();

private:
	double m_l;
	double m_r;
	double m_velocity;
	double m_error;
	double m_acceleration;
	double m_prevPosition;
	double m_position;
	double m_nextPosition;
	double m_deltaT;
	double m_angularVelocity;
	double m_elapsedTime;
	float m_angle;

	std::default_random_engine m_generator;
	std::normal_distribution<double> m_distribution;
};
