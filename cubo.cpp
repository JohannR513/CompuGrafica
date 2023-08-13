#include "cubo.h"

void cubo::setMaterialColor(float r, float g, float b, float a) {
    GLfloat material_Ka[] = { 0.11f, 0.06f, 0.11f, 1.0f };
    GLfloat material_Kd[] = { r, g, b, a };
    GLfloat material_Ks[] = { 0.77f, 0.77f, 0.77f, 1.0f };
    GLfloat material_Se = 18.2f;

    glMaterialfv(GL_FRONT, GL_AMBIENT, material_Ka);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, material_Kd);
    glMaterialfv(GL_FRONT, GL_SPECULAR, material_Ks);
    glMaterialf(GL_FRONT, GL_SHININESS, material_Se);
}

void cubo::dibujarCubo(float x, float y, float z, float rot, float rotX, float rotY, float rotZ) {
    glPushMatrix();
    glTranslatef(x, y, z);
    glRotatef(rot, rotX, rotY, rotZ);
    glutSolidCube(1);
    glPopMatrix();
}
