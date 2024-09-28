#pragma once
#include "Example.h"
class Example3 :
    public Example
{
public:
	Example3();

	virtual void init()override;
	virtual void Render()override;
	virtual void KeyboardFunc(unsigned char key, int X, int Y)override;
	virtual void Idle()override;

	void DrawrRotation();
	void DrawTranslate();
	void DrawScale();
	float angle = 0;
};

