#pragma once
#include "IncludeGL.h"
class Material
{
private:
	GLuint idtexture;
	unsigned int Width, height;
	unsigned char* data;
	void loadParameter();
public:
	Material();

	void Enable();
	void Disable();

	void LoaderBMP(const char* fileName);

	GLuint getID();
};