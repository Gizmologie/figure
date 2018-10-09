#include "triangle.h"
#include "rectangle.h"
#include "disque.h"
#include "figure.h"
#include <iostream>
using namespace std;

int main (void) {
	int a;

	cout << "Choisissez votre figure : (1) Triangle : (2) Rectangle : (3) Disque :" << endl;
	cin >> a;

	triangle* triangle1 = new triangle ();
	rectangle* rectangle1 = new rectangle ();
	disque* disque1 = new disque ();

	if (a==1)
	{// triangle
	cout << "Perimetre du triangle =" << triangle1->ComputePerimeter(2,5,9)<< endl;
	cout << "Aire du triangle =" << triangle1->ComputeArea(2,5)<< endl;
	}
	if (a==2)
	{// rectangle
	cout << "Perimetre du rectangle =" << rectangle1->ComputePerimeter(2,5)<< endl;
	cout << "Aire du rectangle =" << rectangle1->ComputeArea(2,5)<< endl;
	}
	if (a==3)
	{ // disque
	cout << "Perimetre du disque =" << disque1->ComputePerimeter(6)<< endl;
	cout << "Aire du disque =" << disque1->ComputeArea(6)<< endl;
	}

return 0;
}
