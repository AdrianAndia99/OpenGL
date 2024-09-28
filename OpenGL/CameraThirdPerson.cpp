#include "CameraThirdPerson.h"
#include "IncludeGL.h"

CameraThirdPerson::CameraThirdPerson()
{
    position = Vector3(0.0f, 0.0f, 5.0f);
    lookAt = Vector3(0.0f, 0.0f, 0.0f);
    up = Vector3(0.0f, 1.0f, 0.0f);
}

void CameraThirdPerson::updateCamera(const Vector3& spherePosition)
{
    position.x = spherePosition.x;
    position.y = spherePosition.y;
    position.z = spherePosition.z + 5.0f;

    lookAt.x = spherePosition.x;
    lookAt.y = spherePosition.y;
    lookAt.z = spherePosition.z;

    gluLookAt(position.x, position.y, position.z, // Posición de la cámara
        lookAt.x, lookAt.y, lookAt.z,       // Punto de mira
        up.x, up.y, up.z);
}
