#pragma once
#include "Figura3D.h"
#include "TextureManager.h"
#include "Cubo.h"

class Cubo :
    public Figura3D
{
public:
    Cubo();
    virtual void Render()override;
    void DrawCube();
};

