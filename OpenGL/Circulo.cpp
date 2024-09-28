#include "Circulo.h"
#include <GL/glut.h>
#include <cmath>

Circulo::Circulo()
{
}

void Circulo::Render()
{
    //DrawCircle(0.0f, 0.0f, 0.5f, 100);
}

void Circulo::DrawCircle(float cx, float cy, float r, int num_segments)
{
    glBegin(GL_LINE_LOOP);
    for (int i = 0; i < num_segments; i++) {
        float theta = 2.0f * 3.1415926f * float(i) / float(num_segments); // Calculamos el �ngulo del siguiente v�rtice
        float x = r * cosf(theta); // Calculamos la coordenada x del v�rtice
        float y = r * sinf(theta); // Calculamos la coordenada y del v�rtice
        glVertex2f(x + cx, y + cy); // Dibujamos el v�rtice
    }
    glEnd();
}