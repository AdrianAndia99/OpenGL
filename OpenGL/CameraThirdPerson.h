#pragma once
#include "Vector3.h"
class CameraThirdPerson
{
public:
    CameraThirdPerson();

    // M�todo para actualizar la posici�n de la c�mara en tercera persona
    void updateCamera(const Vector3& spherePosition);

    Vector3 position;
    Vector3 lookAt;
    Vector3 up;
};

