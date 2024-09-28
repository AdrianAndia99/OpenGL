#include "DirectionLight.h"

void DirectionLight::init()
{
	Direction[3] = 0;
	glLightfv(fuente, GL_POSITION, Direction);
	GLfloat lightColor[] = { color.Red, color.Green, color.Blue, 1 };
	glLightfv(fuente, GL_DIFFUSE, lightColor);
}
