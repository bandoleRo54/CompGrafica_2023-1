#include "MaquinaTiempo.h"

MaquinaTiempo::MaquinaTiempo() {}

void MaquinaTiempo::crearMaquinaTiempo(GLMmodel* obj)
{
	glPushMatrix();
		glRotatef(20.0f, 1.0f, 0.0f, 0.0f);
		glTranslatef(0.0f, 0.55f, 0.0f);
		glRotatef(160.0f, 0.0f, 1.0f, 0.0f);
		glmDraw(obj, GLM_SMOOTH | GLM_MATERIAL);
	glPopMatrix();
}
