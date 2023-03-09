#include "Suelo.h"

Suelo::Suelo(){}

void Suelo::crearSuelo(GLMmodel* obj)
{
	glPushMatrix();
	glRotatef(45.0f, 0.0f, 1.0f, 1.0f);
	glmDraw(obj, GLM_SMOOTH | GLM_MATERIAL);
	glPopMatrix();
}