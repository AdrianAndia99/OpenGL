#pragma once
#include "Figura2D.h"
class Cuadrado :
    public Figura2D
{
public:
    Cuadrado();
    virtual void Render() override;

    void DrawSquare();
};

