#pragma once
#include "Color.h"
#include "IncludeGL.h"

class Light
{
public:
	Light();

	virtual void init() = 0;

	void enableLight();
	void disableLight();

	Color color;
	GLenum fuente;
};

