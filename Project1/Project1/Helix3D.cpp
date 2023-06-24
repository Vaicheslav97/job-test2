#include "Helix3D.h"
#define _USE_MATH_DEFINES
#include <math.h>


Helix3D::Helix3D(float r, float s) :Curve() {
	radii = r;
	step = s;
}

int Helix3D::getype() { return CurveType::helix3D; }

Point3D Helix3D::getPoint(float t) {
	float X = radii * cosf(t);
	float Y = radii * sinf(t);
	float Z =  step * (t/ (2 * M_PI));
	
	return Point3D(X, Y, Z);
}

Point3D Helix3D::getDerivative(float t) {
	float t1, t2;
	t1 = t - 0.01;
	t2 = t + 0.01;

	float X1 = radii * cosf(t1);
	float Y1 = radii * sinf(t1);
	float Z1 = step * (t1 / (2*M_PI));
	
	float X2 = radii * cosf(t2);
	float Y2 = radii * sinf(t2);
	float Z2 = step  * (t2 / (2 * M_PI));


	return Point3D(X2 - X1, Y2 - Y1, Z2-Z1);
}