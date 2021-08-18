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
	// attributes for Vector2D object
	// these are for x and y position
	double x = 0.0;
	double y = 0.0;

public:
	// default constructor
	Vector2D();
	// constructor with x and y as parameter
	Vector2D(double x_coordinate, double y_coordinate);

	// getter method
	Vector2D getVector2D();
	double getX();
	double getY();
	
	// setter methods
	void setVector2D(double x_coordinate, double y_coordinate);
	void setX(double x_coordinate);
	void setY(double y_coordinate);
};

#endif /* VECTOR2D_HPP_ */
