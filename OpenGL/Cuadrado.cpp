#include "Cuadrado.h"
#include <GL/glut.h>

Cuadrado::Cuadrado()
{
}

void Cuadrado::Render()
{
    material->Enable();
    DrawSquare();
    material->Disable();
}

void Cuadrado::DrawSquare()
{
    glBegin(GL_QUADS);
    glVertex2f(-0.5, -0.5); // V�rtice inferior izquierdo
    glVertex2f(0.5, -0.5); // V�rtice inferior derecho
    glVertex2f(0.5, 0.5); // V�rtice superior derecho
    glVertex2f(-0.5, 0.5); // V�rtice superior izquierdo
    glEnd();
}
