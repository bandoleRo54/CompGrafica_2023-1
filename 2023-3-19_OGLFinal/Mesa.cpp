#include "Mesa.h"

Mesa::Mesa() {}

void Mesa::crearMesa(GLMmodel* obj)
{
	glPushMatrix();
		glRotatef(20.0f, 1.0f, 1.0f, 0.0f);
		glScalef(0.4f, 0.4f, 0.4f);
		glmDraw(obj, GLM_SMOOTH | GLM_MATERIAL | GLM_TEXTURE);
	glPopMatrix();
}