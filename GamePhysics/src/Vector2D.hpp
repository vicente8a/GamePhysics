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
	float x = 0.0;
	float y = 0.0;

public:
	Vector2D();
	// constructor
	Vector2D(float x_coordinate, float y_coordinate);

	// setter methods
	void setVector2D(float x_coordinate, float y_coordinate);

	// getter methods
	float getX() {
		return x;
	}
	float getY() {
		return y;
	}
};

#endif /* VECTOR2D_HPP_ */
