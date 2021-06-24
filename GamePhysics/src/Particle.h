/*
 * Particle.h
 *
 *  Created on: Jun 20, 2021
 *      Author: vicenteochoa
 */

#ifndef PARTICLE_H_
#define PARTICLE_H_

#include "Vector2D.h"

class Particle {

private:
	Vector2D position;
	Vector2D velocity;
	float mass = 0.0;

public:

	Particle();
	Particle(Vector2D pos, Vector2D v, float m);

	void setParticle(Vector2D pos, Vector2D v, float m);

	Vector2D getPosition() {
		return position;
	}
	Vector2D getVelocity() {
		return velocity;
	}
	float getMass() {
		return mass;
	}

};

#endif /* PARTICLE_H_ */
