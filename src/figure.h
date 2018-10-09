/*!\file figure.h
 * \brief creation de l'objet figure
 * \author Aurelien Guillemot
 * \version 1.0
*/

#pragma once
#include <iostream>
using namespace std;

/*\class calcul
 *\brief 2 float defini en virtual
 * {calcul du perimetre et de l'aire de 3 formes.}
*/

class figure
{
public:

/*!\brief
 *\param a sera override
 *\return
*/
	virtual float ComputePerimeter (int a);
/*!\brief
 *\param b sera override
 *\return
*/
	virtual float ComputeArea (int b);
};

