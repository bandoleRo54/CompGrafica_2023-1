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

class Palma
{
public: 
	Palma();
	void crearPalmas(GLMmodel* obj/*float x, float y, float z*/);
};

