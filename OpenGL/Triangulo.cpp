#include "Triangulo.h"
#include <GL/glut.h>

Triangulo::Triangulo()
{
}

void Triangulo::Render()
{
    material->Enable();
    DrawTriangle();
    material->Disable();
}

void Triangulo::DrawTriangle()
{
    glBegin(GL_TRIANGLES);
    glVertex3f(0.0, 0.5, 0.0); // Vértice superior
    glColor3f(0.0, 1.0, 0.0); // Color verde
    glVertex3f(-0.5, -0.5, 0.0); // Vértice inferior izquierdo
    glColor3f(0.0, 0.0, 1.0); // Color azul
    glVertex3f(0.5, -0.5, 0.0); // Vértice inferior derecho
    glEnd();
}
