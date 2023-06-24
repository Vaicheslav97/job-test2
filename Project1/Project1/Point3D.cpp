#include "Point3D.h"

Point3D::Point3D() {
	X = 0;
	Y = 0;
	Z = 0;
}

Point3D::Point3D(float x, float y, float z) {
	X = x;
	Y = y;
	Z = z;
}

Point3D Point3D:: operator + (const Point3D& p) {
	return Point3D(X + p.X, Y + p.Y, Z + p.Z);
}


Point3D Point3D:: operator - (const Point3D& p)
{
	return Point3D(X - p.X, Y - p.Y, Z - p.Z);
}