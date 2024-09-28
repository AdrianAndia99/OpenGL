#pragma once
#include "IncludeGL.h"
class TextureManager
{
public:
	TextureManager();

	GLuint loadParameter();
	
	GLuint idtexture;
	unsigned int Width, height;
	unsigned char* data;
};

