#pragma once
#include "figure.h"

class disque : public figure
{
public :
	float ComputePerimeter (float rayon);
	float ComputeArea (float rayon);
};
