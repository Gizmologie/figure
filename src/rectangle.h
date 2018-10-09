/*!\file rectangle.h
 * \brief calcul du perimetre et de l'aire du rectangle
 *\author Aurelien Guillemot
 *\version 1.0
*/

#pragma once
#include "figure.h"

/*! \class rectangle
 * \brief calcul rectangle
 * {calcul aire et perimetre}
*/

class rectangle : public figure
{
public:
/*! \brief
 * \param longueur valeur necessaire pour le calcul
 * \param largeur valeur necessaire pour le calcul
 * {calcul (lageur+longuguer)*2}
 * \return
*/
	float ComputePerimeter (float longueur, float largeur) override;
/*! \brief
 * \param longueur
 * \param largeur
 * {calcul largeur*longueur}
 * \return
*/
	float ComputeArea (float longueur, float largeur) override;
private:
};


