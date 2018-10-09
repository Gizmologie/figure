#include "disque.h"
#include <math.h>

float disque::ComputePerimeter (float rayon)
{
	return ((rayon * M_PI)*2);
}

float disque::ComputeArea (float rayon)
{
	return (rayon * (M_PI*M_PI));
}
