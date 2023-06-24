#pragma once
class Point3D{
public:
	float X, Y, Z;
	
	Point3D();

	Point3D(float x, float y, float z);

	Point3D operator + (const Point3D& p);
	Point3D operator - (const Point3D& p);

	
};

