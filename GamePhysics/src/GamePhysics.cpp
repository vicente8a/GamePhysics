//============================================================================
// Name        : GamePhysics.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>
#include "Vector2D.hpp"
#include "Particle.hpp"

const int num_particles = 1;

Particle particles[num_particles];

void PrintParticles() {
	for(int i = 0; i < num_particles; i++) {
		Particle *particle = &particles[i];
		printf("particle[%i] (%.2f, %.2f\n", i, particle->getPosition().getX(), particle->getPosition().getY());
	}
}

void InitializeParticles() {
	for(int i = 0; i < num_particles; i++) {
		particles[i].setPosition((Vector2D){arc4random_uniform(50), arc4random_uniform(50)});
		particles[i].setVelocity((Vector2D){0,0});
		particles[i].setMass(1.0);
	}
}

Vector2D ComputeForce(Particle *particle) {
	return (Vector2D){0, particle->getMass() * -9.81};
}

int main() {

	return 0;
}
