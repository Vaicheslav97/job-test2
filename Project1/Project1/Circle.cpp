#include "Circle.h"

Circle::Circle(float r) :Curve() {
	radii = r;
}

int Circle::getype() { return CurveType::circle; }

Point3D Circle::getPoint(float t) {
	float X= radii * cosf(t);
	float Y= radii * sinf(t);

	return Point3D(X,Y,0);
}

Point3D Circle::getDerivative(float t) {
	float t1, t2;
	t1 = t - 0.01f;
	t2 = t + 0.01f;

	float X1 = radii * cosf(t1);
	float Y1 = radii * sinf(t1);

	float X2 = radii * cosf(t2);
	float Y2 = radii * sinf(t2);
	

	return Point3D(X2-X1, Y2-Y1, 0);
}

float Circle::getRadii() { return radii; }
void Circle::setRadii(float r) { radii = r; }