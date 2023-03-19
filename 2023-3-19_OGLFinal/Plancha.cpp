#include "Plancha.h"

Plancha::Plancha(){}

void Plancha::crearSuelo(GLMmodel* obj)
{
	glPushMatrix();
		glRotatef(20.0f, 1.0f, 1.0f, 0.0f);
		glmDraw(obj, GLM_SMOOTH | GLM_MATERIAL);
	glPopMatrix();
}

void Plancha::crearParedes(GLMmodel* obj)
{
	glPushMatrix();

		glRotatef(20.0f, 1.0f, 1.0f, 0.0f);
		glRotatef(90.0f, 0.0f, 0.0f, 1.0f);
		glTranslatef(0.5f, -1.0f, 0.0f);
		glScalef(0.5f, 1.0f, 1.0f);
		glmDraw(obj, GLM_SMOOTH | GLM_MATERIAL);

		glRotatef(90.0f, 1.0f, 0.0f, 0.0f);
		glTranslatef(0.0f, -1.0f, -1.0f);
		glmDraw(obj, GLM_SMOOTH | GLM_MATERIAL);

	glPopMatrix();
}