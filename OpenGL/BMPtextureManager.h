#pragma once
#include "TextureManager.h"
class BMPtextureManager :
    public TextureManager
{
public:
    BMPtextureManager();

    GLuint loadFile(const char* fileName);
};

