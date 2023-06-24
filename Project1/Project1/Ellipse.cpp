#include "Ellipse.h"

Ellipse::Ellipse(float r1, float r2) :Curve() {
	radii1 = r1;
	radii2 = r2;
}

int Ellipse::getype() { return CurveType::ellipse; }

Point3D Ellipse::getPoint(float t) {
	float X = radii1 * cosf(t);
	float Y = radii2 * sinf(t);

	return Point3D(X, Y, 0);
}

Point3D Ellipse::getDerivative(float t) {
	float t1, t2;
	t1 = t - 0.01;
	t2 = t + 0.01;

	float X1 = radii1 * cosf(t1);
	float Y1 = radii2 * sinf(t1);

	float X2 = radii1 * cosf(t2);
	float Y2 = radii2 * sinf(t2);


	return Point3D(X2 - X1, Y2 - Y1, 0);
}