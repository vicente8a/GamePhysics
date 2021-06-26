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
	for(int i = 0; i < num_particles; i++) {
		particles[i].setPosition((Vector2D){1,1});
		particles[i].setVelocity((Vector2D){0,0});
		particles[i].setMass(1.0);
	}
}

// TODO
// maybe try to return a getter function
// create a getter the returns vector2d type
Vector2D ComputeForce(Particle *particle) {
	return (Vector2D){0.0, particle->getMass() * -9.81};
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

			//
			// std::cout << "1: " <<  particle->getPosition().getX() << ", " << particle->getPosition().getY() << std::endl;

			Vector2D force = ComputeForce(particle);
			Vector2D acceleration;
			acceleration.setVector2D(force.getX()/particle->getMass(), force.getY()/particle->getMass());

			//
			// std::cout << "2: " <<  particle->getPosition().getX() << ", " << particle->getPosition().getY() << std::endl;
			std::cout << "2: " <<  particle->getYVelocity() << ", " << acceleration.getY() << std::endl;

			particle->setXVelocity(particle->getXVelocity() + acceleration.getX() * dt);
			particle->setYVelocity(particle->getYVelocity() + acceleration.getY() * dt);

			particle->setXVelocity(particle->getXPosition() + particle->getXVelocity() * dt);
			particle->setXVelocity(particle->getYPosition() + particle->getYVelocity() * dt);

			//
			// std::cout << "3: " <<  particle->getPosition().getX() << ", " << particle->getPosition().getY() << std::endl;
		}
		PrintParticles();
		currentTime += dt;
	}
}

int main() {

	RunSimulation();

	return 0;
}
