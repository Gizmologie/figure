#pragma once
#include "figure.h"

class rectangle : public figure
{
public:
	float ComputePerimeter (float longueur, float largeur) override;
	float ComputeArea (float longueur, float largeur) override;
private:
};


