#include "Piramide.h"
//#include "IncludeGL.h"
#include <GL/glut.h>

Piramide::Piramide()
{

}
void Piramide::Render()
{
    glBegin(GL_TRIANGLES);
    // Base
    glColor3f(1.0, 0.0, 0.0);
    glVertex3f(-0.5, -0.5, 0.5);
    glVertex3f(0.5, -0.5, 0.5);
    glVertex3f(0.5, -0.5, -0.5);

    glVertex3f(0.5, -0.5, -0.5);
    glVertex3f(-0.5, -0.5, -0.5);
    glVertex3f(-0.5, -0.5, 0.5);

    // Front face
    glColor3f(0.0, 1.0, 0.0);
    glVertex3f(0.0, 0.5, 0.0);
    glVertex3f(-0.5, -0.5, 0.5);
    glVertex3f(0.5, -0.5, 0.5);

    // Right face
    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(0.0, 0.5, 0.0);
    glVertex3f(0.5, -0.5, 0.5);
    glVertex3f(0.5, -0.5, -0.5);

    // Back face
    glColor3f(1.0, 1.0, 0.0);
    glVertex3f(0.0, 0.5, 0.0);
    glVertex3f(0.5, -0.5, -0.5);
    glVertex3f(-0.5, -0.5, -0.5);

    // Left face
    glColor3f(1.0, 0.0, 1.0);
    glVertex3f(0.0, 0.5, 0.0);
    glVertex3f(-0.5, -0.5, -0.5);
    glVertex3f(-0.5, -0.5, 0.5);
    glEnd();
}

void Piramide::DrawPyramid()
{

}

