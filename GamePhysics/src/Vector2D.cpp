/*
 * Vector2D.cpp
 *
 *  Created on: Jun 20, 2021
 *      Author: vicenteochoa
 */

#include "Vector2D.hpp"

Vector2D::Vector2D() {
	x = 0.0;
	y = 0.0;
}

Vector2D::Vector2D(double x_coordinate, double y_coordinate) {
	void setVector2D(double x_coordinate, double y_coordinate);
}


void Vector2D::setVector2D(double x_coordinate, double y_coordinate) {
	x = x_coordinate;
	y = y_coordinate;
}

void Vector2D::setX(double x_coordinate) {
	x = x_coordinate;
}
void Vector2D::setY(double y_coordinate) {
	y = y_coordinate;
}

double Vector2D::getX() {
	return x;
}
double Vector2D::getY() {
	return y;
}

/*
Vector2D::~Vector2D() {
	// TODO Auto-generated destructor stub
}
*/
