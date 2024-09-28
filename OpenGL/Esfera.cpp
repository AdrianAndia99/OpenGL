#include "Esfera.h"
#include <GL/glut.h>

Esfera::Esfera()
{
	positionSphere.x = 0.0f;
	positionSphere.y = 0.0f;
	positionSphere.z = 0.0f;
	radio = 0.5;
	slice = 20;
	stack = 20;
	material = new Material();
}
void Esfera::Render()
{
	material->Enable();
	drawSphere();
	material->Disable();
}

void Esfera::drawSphere()
{
	glColor3f(1.0f, 0.0f, 0.0f);
	glPushMatrix();
	glTranslatef(positionSphere.x, positionSphere.y, positionSphere.z);
	glutSolidSphere(radio, slice, stack);
	glPopMatrix();
}