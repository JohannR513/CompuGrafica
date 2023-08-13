#include <GL/glew.h>
#include <GL/freeglut.h>
#include "glApplication.h"
#include "glutWindow.h"
#include "glsl.h"
#pragma once
class cubo
{
public:
	cubo() {};
	void setMaterialColor(float r, float g, float b, float a);

	void dibujarCubo(float x, float y, float z, float rot, float rotX, float rotY, float rotZ);
	~cubo() {};

};
