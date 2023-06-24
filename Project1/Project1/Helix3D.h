#pragma once
#include "Curve.h"


class Helix3D : public Curve{
	float radii; 
	float step;
public:
	Helix3D(float r, float s);
	int getype();
	Point3D getPoint(float t);
	Point3D getDerivative(float t);

};

