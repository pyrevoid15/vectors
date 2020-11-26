#pragma once
#include <cmath>

namespace vectors {
	struct Vector {
		double x, y, z;

		Vector();
		Vector(double, double);
		Vector(double, double, double);
		~Vector();

		Vector operator+(Vector&); //vector addition
		Vector operator-(Vector&); //vector subtraction
		Vector operator*(double); //vector scalar multiplication
		Vector operator^(Vector&); //vector cross product
		void operator+=(Vector&); //vector addition
		void operator-=(Vector&); //vector subtraction
		void operator*=(double); //vector scalar multiplication
		void operator=(Vector&); 

		double operator*(Vector&); //vector dot product
		double getRelAngle(Vector&);
		double getAngle();
		double magnitude();
		double direction();
		Vector get_unitvector();
	};

	struct OffsetVector : public Vector { //vector with a starting point not at origin.
		double x0, y0, z0;
		OffsetVector();
		OffsetVector(double, double, double, double);
		OffsetVector(double, double, double, double, double, double);
	};
}