/*
 * Particle.h
 *
 *  Created on: Jun 20, 2021
 *      Author: vicenteochoa
 */

#ifndef PARTICLE_HPP_
#define PARTICLE_HPP_

#include "Vector2D.hpp"

class Particle {

private:
	Vector2D position;
	Vector2D velocity;
	double mass = 0.0;

public:

	Particle();
	Particle(Vector2D pos, Vector2D v, double m);

	void setParticle(Vector2D pos, Vector2D v, double m);
	void setPosition(Vector2D pos);
	void setVelocity(Vector2D v);

	void setXPosition(double x_pos);
	void setXVelocity(double x_vel);
	void setYPosition(double y_pos);
	void setYVelocity(double y_vel);

	double getXPosition();
	double getXVelocity();
	double getYPosition();
	double getYVelocity();

	void setMass(double m);

	Vector2D getPosition();
	Vector2D getVelocity();
	double getMass();

};

#endif /* PARTICLE_HPP_ */
