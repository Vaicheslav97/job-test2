#pragma once
#include "Curve.h"
class Circle : public Curve{
	float radii;
public:
	Circle(float r);
	int getype();
	Point3D getPoint(float t);
	Point3D getDerivative(float t);
	float getRadii();
	void setRadii(float r);
};

