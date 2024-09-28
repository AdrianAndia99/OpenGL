#include "Figura.h"

Figura::Figura()
{

}

void Figura::initMaterial(const char* fileName)
{
	material = new Material();
	material->LoaderBMP(fileName);
}
