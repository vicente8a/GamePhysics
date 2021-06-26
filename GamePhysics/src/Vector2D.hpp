/*
 * Vector2D.h
 *
 *  Created on: Jun 20, 2021
 *      Author: vicenteochoa
 */

#ifndef VECTOR2D_HPP_
#define VECTOR2D_HPP_



class Vector2D {

private:
	// attributes for x and y position
	double x = 0.0;
	double y = 0.0;

public:
	Vector2D();
	// constructor
	Vector2D(double x_coordinate, double y_coordinate);

	Vector2D getVector2D();
	// setter methods
	void setVector2D(double x_coordinate, double y_coordinate);

	void setX(double x_coordinate);
	void setY(double y_coordinate);

	// getter methods
	double getX();
	double getY();
};

#endif /* VECTOR2D_HPP_ */
