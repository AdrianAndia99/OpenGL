#pragma once
#include "Example.h"
class Example2 :
    public Example
{
public:
	Example2();

	virtual void init()override;
	virtual void Render()override;
	virtual void KeyboardFunc(unsigned char key, int X, int Y)override;
	virtual void Idle()override;

	void DrawCube();
};

