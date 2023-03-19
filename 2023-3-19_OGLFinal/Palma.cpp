#include "Palma.h"

Palma::Palma() {}

void Palma::crearPalmas(GLMmodel* obj)
{
	glPushMatrix();
		glRotatef(20.0f, 1.0f, 1.0f, 0.0f);
		glScalef(0.35f, 0.45f, 0.35f);
		glTranslatef(-2.3f, 1.0f, -1.5f);
		glmDraw(obj, GLM_SMOOTH | GLM_MATERIAL);
	glPopMatrix();

	glPushMatrix();
		glRotatef(20.0f, 1.0f, 1.0f, 0.0f);
		glScalef(0.35f, 0.35f, 0.35f);
		glTranslatef(-2.3f, 1.0f, 2.5f);
		glmDraw(obj, GLM_SMOOTH | GLM_MATERIAL);
	glPopMatrix();
}