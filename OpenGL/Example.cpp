#include "Example.h"
#include <GL/glut.h>

Example::Example()
{
}

void Example::DrawAxis(float distance)
{
	glLineWidth(4);

	glColor4f(0.0f, 1.0f, 0.0f, 0.0f);
	glBegin(GL_LINES);
		glVertex3f(0.0f, distance, 0.0f);
		glVertex3f(0.0f, -distance, 0.0f);
	glEnd();

	glColor4f(1.0f, 0.0f, 0.0f, 0.0f);
	glBegin(GL_LINES);
		glVertex3f(distance, 0.0f, 0.0f);
		glVertex3f(-distance, 0.0f, 0.0f);
	glEnd();

	glColor4f(0.0f, 0.0f, 1.0f, 0.0f);
	glBegin(GL_LINES);
		glVertex3f(0.0f, 0.0f, distance);
		glVertex3f(0.0f, 0.0f, -distance);
	glEnd();
}

void Example::DrawGrids(float size, float step)
{
	glLineWidth(1);
	glColor4f(0.5f, 0.5f, 0.5f, 1.0f);

	glBegin(GL_LINES);

	// Dibuja líneas horizontales
	for (float i = -size; i <= size; i += step)
	{
		glVertex3f(-size, 0.0f, i);
		glVertex3f(size, 0.0f, i);
	}

	// Dibuja líneas verticales
	for (float i = -size; i <= size; i += step)
	{
		glVertex3f(i, 0.0f, -size);
		glVertex3f(i, 0.0f, size);
	}

	glEnd();
}

void Example::DrawPoint()
{
}

