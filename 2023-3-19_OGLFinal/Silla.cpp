#include "Silla.h"

Silla::Silla() {}

void Silla::crearSillas(GLMmodel* obj)
{
	glPushMatrix();
		glRotatef(20.0f, 1.0f, 1.0f, 0.0f);
		glScalef(0.18f, 0.18f, 0.18f);
		glTranslatef(-4.2f, 1.5f, 0.0f);
		glRotatef(75.0f, 0.0f, 1.0f, 0.0f);
		glmDraw(obj, GLM_SMOOTH | GLM_MATERIAL);
	glPopMatrix();

	glPushMatrix();
		glRotatef(20.0f, 1.0f, 1.0f, 0.0f);
		glScalef(0.18f, 0.18f, 0.18f);
		glTranslatef(-4.2f, 1.5f, 3.0f);
		glRotatef(110.0f, 0.0f, 1.0f, 0.0f);
		glmDraw(obj, GLM_SMOOTH | GLM_MATERIAL);
	glPopMatrix();
}