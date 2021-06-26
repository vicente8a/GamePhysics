//============================================================================
// Name        : GamePhysics.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>
#include <unistd.h>
#include "Vector2D.hpp"
#include "Particle.hpp"

const int num_particles = 1;

Particle particles[num_particles];

void PrintParticles() {
	for(int i = 0; i < num_particles; i++) {
		Particle *particle = &particles[i];
		printf("particle[%i] (%.2f, %.2f)\n", i, particle->getPosition().getX(), particle->getPosition().getY());
	}
}

void InitializeParticles() {
	Vector2D pos;
	Vector2D vel;
	pos.setVector2D(-8, 58);
	vel.setVector2D(0, 0);
	for(int i = 0; i < num_particles; i++) {
		particles[i].setPosition(pos);
		particles[i].setVelocity(vel);
		particles[i].setMass(1.0);
	}
}

Vector2D ComputeForce(Particle *particle) {
	Vector2D v;
	v.setVector2D(0.0, particle->getMass() * -9.81);
	return v;
}

void RunSimulation() {
	// TODO maybe change this to a global constant
	double totalSimulationTime = 10;
	double currentTime = 0.0;
	double dt = 1.0;

	InitializeParticles();
	PrintParticles();

	while(currentTime < totalSimulationTime) {
		sleep(dt);

		for(int i = 0; i < num_particles; i++) {
			Particle *particle = &particles[i];
			Vector2D force = ComputeForce(particle);
			Vector2D acceleration;
			acceleration.setVector2D(force.getX()/particle->getMass(), force.getY()/particle->getMass());

			particle->setXVelocity(particle->getXVelocity() + (acceleration.getX() * dt));
			particle->setYVelocity(particle->getYVelocity() + (acceleration.getY() * dt));
			particle->setXPosition(particle->getXPosition() + (particle->getXVelocity() * dt));
			particle->setYPosition(particle->getYPosition() + (particle->getYVelocity() * dt));

		}
		PrintParticles();
		currentTime += dt;
	}
}

int main() {

	RunSimulation();

	return 0;
}
