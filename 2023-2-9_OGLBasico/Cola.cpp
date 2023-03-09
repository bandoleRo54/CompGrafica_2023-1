#include "Cola.h"

Cola::Cola(){}

void Cola::DibujarBicho(float x, float y, float z) 
{
	glPushMatrix();
		glTranslatef(x, y, z);
	glPopMatrix();
}

void Cola::DibujarCola(float ANGULO, int segments, float x, float y, float z) 
{
	glPushMatrix();
		glTranslatef(x, y, z);

		// Reutilizando codigo de http://www.glprogramming.com/red/chapter03.html
		glPushMatrix();

		glTranslatef(-0.5, 0.0, 0.0);
		glRotatef(ANGULO, 0.0, 0.0, 1.0);
		glTranslatef(0.5, 0.0, 0.0);
		
		glPushMatrix();
		glScalef(1.0, 0.4, 1.0);
		glutSolidCube(1.0);
		glPopMatrix();

		for (int i = 1; i <= segments; i++) {
			glTranslatef(0.0, 0.0, 0.0);
			glRotatef(ANGULO, 0.0, 0.0, i);
			glTranslatef(i/10, 0.0, 0.0);
			glPushMatrix();
			glScalef(1.0+(i/10), 0.4, 1.0);
			glutSolidCube(1.0);
			glPopMatrix();
		}

		glPopMatrix();
	glPopMatrix();
}