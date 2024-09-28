#pragma once
#include "Figura3D.h"
#include "Vector3.h"
class Esfera :
    public Figura3D
{
public:
    Esfera();
    virtual void Render() override;
    void drawSphere();
    Vector3 positionSphere;
    float radio;
    int slice;
    int stack;
};

