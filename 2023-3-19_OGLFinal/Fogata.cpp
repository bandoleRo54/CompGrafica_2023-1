#include "Fogata.h"

Fogata::Fogata() {}

void Fogata::crearFogata(GLMmodel* obj)
{
	glPushMatrix();
		glRotatef(20.0f, 1.0f, 1.0f, 0.0f);
		glTranslatef(0.6f, 0.3f, 0.2f);
		glmDraw(obj, GLM_SMOOTH | GLM_MATERIAL);
	glPopMatrix();
}