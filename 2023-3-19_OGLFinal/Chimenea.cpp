#include "Chimenea.h"

Chimenea::Chimenea() {}

void Chimenea::crearChimenea(GLMmodel* obj)
{
	glPushMatrix();
		glRotatef(20.0f, 1.0f, 1.0f, 0.0f);
		glScalef(0.5f, 0.5f, 0.5f);
		glTranslatef(1.5f, 1.1f, 0.2f);
		glRotatef(-90.0f, 0.0f, 1.0f, 0.0f);
		glmDraw(obj, GLM_SMOOTH | GLM_MATERIAL);
	glPopMatrix();
}