#pragma once
#include "Vector3.h"
class CameraThirdPerson
{
public:
    CameraThirdPerson();

    // Método para actualizar la posición de la cámara en tercera persona
    void updateCamera(const Vector3& spherePosition);

    Vector3 position;
    Vector3 lookAt;
    Vector3 up;
};

