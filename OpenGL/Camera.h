#pragma once
#include "Vector3.h"
class Camera
{
public:
	Camera();
	Vector3 position;
	Vector3 Direction;

	void updateCamera();
	void Init();
};

