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
		printf("particle[%i] (%.2f, %.2f\n", i, particle->getPosition().getX(), particle->getPosition().getY());
	}
}

void InitializeParticles() {
	for(int i = 0; i < num_particles; i++) {
		particles[i].setPosition((Vector2D){(double)arc4random_uniform(50), (double)arc4random_uniform(50)});
		particles[i].setPosition((Vector2D){(double)arc4random_uniform(50), (double)arc4random_uniform(50)});
		particles[i].setVelocity((Vector2D){0,0});
		particles[i].setMass(1.0);
	}
}


Vector2D ComputeForce(Particle *particle) {
	return {0.0, particle->getMass() * -9.81};
}

void RunSimulation() {
	// TODO maybe change this to a global constant
	double totalSimulationTime = 10;
	double currentTime = 0.0;
	double dt = 1;

	InitializeParticles();
	PrintParticles();

	while(currentTime < totalSimulationTime) {
		sleep(dt);

		for(int i = 0; i < num_particles; i++) {
			Particle *particle = &particles[i];
			Vector2D force = ComputeForce(particle);
			Vector2D acceleration(force.getX()/particle->getMass(),force.getY()/particle->getMass());

			/*
			particle->velocity.x += acceleration.x * dt;
            particle->velocity.y += acceleration.y * dt;
            particle->position.x += particle->velocity.x * dt;
            particle->position.y += particle->velocity.y * dt;
			 */
		}
		PrintParticles();
		currentTime += dt;
	}
}

int main() {

	RunSimulation();

	return 0;
}
