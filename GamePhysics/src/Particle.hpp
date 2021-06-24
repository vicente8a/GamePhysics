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
	float mass = 0.0;

public:

	Particle();
	Particle(Vector2D pos, Vector2D v, float m);

	void setParticle(Vector2D pos, Vector2D v, float m);

	// TODO: change this to getY and getX
	Vector2D getPosition();
	Vector2D getVelocity();
	float getMass();

};

#endif /* PARTICLE_HPP_ */