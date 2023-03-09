#pragma once
#include <GL/glew.h>
#include <GL/freeglut.h>
#include "glApplication.h"
#include "glutWindow.h"
#include "glsl.h"

class Cola
{
public:
	Cola();
	void DibujarBicho(float x, float y, float z);
	void DibujarCola(float ANGULO, int segments, float x, float y, float z);

};

