#pragma once
#include "Curve.h"
class Ellipse : public Curve{

	float radii1; float radii2;
public:
	Ellipse(float r1, float r2);
	int getype();
	Point3D getPoint(float t);
	Point3D getDerivative(float t);
};

