#include <iostream>
#include<vector>
#include<algorithm>
#define _USE_MATH_DEFINES
#include <math.h>


#include"Point3D.h"

#include"Curve.h"
#include"Circle.h"
#include"Ellipse.h"
#include"Helix3D.h"



using namespace std;

bool compareRadii(Curve* c1, Curve* c2) {
	float r1 = ((Circle*)c1)->getRadii();
	float r2 = ((Circle*)c2)->getRadii();
	return (r1 < r2);
}

int main(char args[]) {
	
	const int curveNum = 10;

	vector <Curve*> firstContainer(0);

	srand(time(0));
	for (int i = 0; i < curveNum; i++) {
		int rtype = rand()%3;
		Curve* c;
		switch (rtype){
		case CurveType::circle: {
			
			c= new Circle(rand());
		
		}break;
		case CurveType::ellipse: {
			
			c = new Ellipse(rand(), rand()); 
		
		}break;
		case CurveType::helix3D: {
			float a = 10.0f*((float)rand()/RAND_MAX);
			c = new Helix3D(rand(), a); 
		
		}break;

		}
		firstContainer.push_back(c);
	}



	for (int i = 0; i < curveNum; i++) {
		Curve* c = firstContainer.at(i);
	cout << "i =" << i << endl;
	cout << "Type =" << CurveNames[c->getype()] << endl;
	Point3D p = c->getPoint(M_PI_4);
	cout << "Point(t) =" << p.X << ", " << p.Y << ", " << p.Z << endl;
	Point3D v = c->getDerivative(M_PI_4);
	cout << "Derivative(t) =" << v.X << ", " << v.Y << ", " << v.Z << endl;
	}

	vector <Curve*> secondContainer(0);

	for (int i = 0; i < curveNum; i++) {
		Curve* c = firstContainer.at(i);
		if (c->getype() == CurveType::circle) {
			secondContainer.push_back(c);
		}
	}

	std::sort(secondContainer.begin(), secondContainer.end(), compareRadii);
	
	float TotalRadii = 0;
	for (int i = 0; i < secondContainer.size(); i++) {
		Curve* c = secondContainer.at(i);
		 cout <<"i= "<<i<<" radii = "<< ((Circle*)c)->getRadii() << endl;
		TotalRadii += ((Circle*)c)->getRadii();
	}
	cout << "Total radii = " << TotalRadii << endl;

		system("pause");
	return 0;
}

