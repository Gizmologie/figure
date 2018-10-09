#pragma once
#include "figure.h"

class triangle : public figure
{
public :
	float ComputePerimeter (float side1, float side2, float side3);
	float ComputeArea (float base, float hauteur);
private :
};
