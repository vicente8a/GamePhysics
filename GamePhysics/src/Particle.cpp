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

Particle::Particle(Vector2D pos, Vector2D v, double m) {
	void setParticle(Vector2D pos, Vector2D v, double m);
}

void Particle::setParticle(Vector2D pos, Vector2D v, double m) {
	position = pos;
	velocity = v;
	mass = m;
}

void Particle::setPosition(Vector2D pos) {
	position = pos;
}
void Particle::setVelocity(Vector2D v) {
	velocity = v;
}
void Particle::setMass(double m) {
	mass = m;
}

Vector2D Particle::getPosition() {
	return position;
}

Vector2D Particle::getVelocity() {
	return velocity;
}

double Particle::getMass() {
	return mass;
}

/*
Particle::~Particle() {
	// TODO Auto-generated destructor stub
}
*/
