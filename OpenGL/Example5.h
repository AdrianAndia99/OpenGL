#pragma once
#include "Example.h"
#include "Esfera.h"
#include <GL/glut.h>

class Example5 :
    public Example
{
public:
	Esfera sphere;

	Example5();

	virtual void init()override;
	virtual void Render()override;
	virtual void KeyboardFunc(unsigned char key, int X, int Y)override;
	virtual void Idle()override;

	void DrawSphere();
	void DrawLine();
	void DrawAxis();

	void Ligth();
	void material();
};

