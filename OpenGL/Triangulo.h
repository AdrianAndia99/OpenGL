#pragma once
#include "Figura2D.h"
class Triangulo :
    public Figura2D
{
public:
    Triangulo();
    virtual void Render()override;
    void DrawTriangle();
};

