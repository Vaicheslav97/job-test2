#pragma once
#include "Point3D.h"
#include<math.h>

enum CurveType {circle,ellipse, helix3D };
static char CurveNames[][8] {"circle","ellipse", "helix3D"};

class Curve{
public:
	virtual int getype() = 0;
	virtual Point3D getDerivative(float t) = 0;
	virtual Point3D getPoint(float t) = 0;
};

