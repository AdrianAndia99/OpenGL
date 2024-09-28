#pragma once
#include "Figura3D.h"
class Piramide :
    public Figura3D
{
public:
    Piramide();

    virtual void Render() override;
    void DrawPyramid();
};

