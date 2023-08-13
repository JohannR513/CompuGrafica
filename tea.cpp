#include "tea.h"
void tea::dibujarTea(float x, float y, float z) {
	glPushMatrix();
	glTranslatef(x, y, z);
	glutSolidTeapot(0.7);
	glPopMatrix();
}