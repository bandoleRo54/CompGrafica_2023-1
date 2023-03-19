#pragma once
#include <GL/glew.h>
#include <GL/freeglut.h>
#include "glApplication.h"
#include "glutWindow.h"
#include <iostream>
#include "glsl.h"
#include <time.h>
#include "glm.h"
#include <FreeImage.h>

class Plancha
{
public:
	Plancha();
	void crearSuelo(GLMmodel* obj/*float x, float y, float z*/);
	void crearParedes(GLMmodel* obj);
};

