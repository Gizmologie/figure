/*! \file triangle.h
 * \brief calcul perimetre et aire du triangle
 * \author Aurelien Guillemot
 * \version 1.0
*/
#pragma once
#include "figure.h"

/*! \class triangle
 * \brief calcul aire et perimetre d'un triangle
*/
class triangle : public figure
{
public :
/*! \brief
 * \param side1 side2 side3 sont les valeurs des 3 cotes. On fait la somme pour trouver le perimetre 
 * \return
*/
	float ComputePerimeter (float side1, float side2, float side3);
/*! \brief
 * \param base et hauteur. (Base * hauteur)/2
 * \return
*/
	float ComputeArea (float base, float hauteur);
private :
};
