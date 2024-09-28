#include "Camera.h"
#include "IncludeGL.h"

Camera::Camera()
{
	position.x = 2.5f;
	position.y = 2.5f;
	position.z = 2.5f;
}

void Camera::updateCamera()
{
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluLookAt(position.x, position.y, position.z, Direction.x, Direction.y, Direction.z, 0, 1, 0);
}

void Camera::Init()
{
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluLookAt(position.x, position.y, position.z, 0, 0, 0, 0, 1, 0);
}