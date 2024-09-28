#include "Light.h"

Light::Light()
{
	fuente = GL_LIGHT0;
}

void Light::enableLight()
{
	glEnable(fuente);
}

void Light::disableLight()
{
	glDisable(fuente);
}
