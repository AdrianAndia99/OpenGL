#pragma once
#include "Figura2D.h"
class Circulo :
    public Figura2D
{
public:
    Circulo();
    virtual void Render()override;
    void DrawCircle(float cx, float cy, float r, int num_segments);
};

