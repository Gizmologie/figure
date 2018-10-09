/*! \file disque.h
 * \brief calcul disque
 * \author Aurelien Guillemot
 * \version 1.0
*/
#pragma once
#include "figure.h"

/*! \class disque
 * \brief calcul disque
 * {calcul air et perimetre du disque}
*/

class disque : public figure
{
public :
/*! \brief
 * \param rayon
 * {on calcul le perimetre avec le rayon et PI}
 * \return
*/
	float ComputePerimeter (float rayon);
/*! \brief
 * \param rayon
 * {on calcul l'air avec le rayon et PI}
 * \return
*/
	float ComputeArea (float rayon);
};
