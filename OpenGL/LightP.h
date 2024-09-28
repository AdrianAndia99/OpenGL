#pragma once
#include "Light.h"
#include "IncludeGL.h"
class LightP :
    public Light
{
public:
    GLfloat position[3];
};