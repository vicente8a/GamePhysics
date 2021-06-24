/*
 * Particle.cpp
 *
 *  Created on: Jun 20, 2021
 *      Author: vicenteochoa
 */

#include "Particle.hpp"

#include "Vector2D.hpp"

Particle::Particle() {
	Vector2D position;
	Vector2D velocity;
	mass = 0.0;
}

Particle::Particle(Vector2D pos, Vector2D v, float m) {
	void setParticle(Vector2D pos, Vector2D v, float m);

}

void Particle::setParticle(Vector2D pos, Vector2D v, float m) {
	position = pos;
	velocity = v;
	mass = m;
}
/*
Particle::~Particle() {
	// TODO Auto-generated destructor stub
}
*/
