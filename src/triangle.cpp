#include "triangle.h"

float triangle::ComputePerimeter (float side1, float side2, float side3)
{
	return (side1 + side2 + side3);
}

float triangle::ComputeArea (float base, float hauteur)
{
	return ((base*hauteur)/2);
}
