#pragma once
#include "Example.h"
#include "Example2.h"
#include "Esfera.h"
#include "Camera.h"
#include "CameraThirdPerson.h"
#include <GL/glut.h>

class Example4 :
    public Example
{
public:
	Example4();
	Example2 example2;
	Esfera sphere;
	Camera camera;
	CameraThirdPerson cameraThirdPerson;

	virtual void init()override;
	virtual void Render()override;
	virtual void KeyboardFunc(unsigned char key, int X, int Y)override;
	virtual void Idle()override;
};

