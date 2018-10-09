#include "rectangle.h"

float rectangle::ComputePerimeter (float longueur, float largeur)
{
	return ((longueur + largeur)*2);
}

float rectangle::ComputeArea (float longueur, float largeur)
{
	return (longueur * largeur);
}
