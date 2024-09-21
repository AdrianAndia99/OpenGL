#pragma once
#include "Example.h"
class Example1: public Example
{
public:
	Example1();
	
	virtual void init()override;
	virtual void Render()override;
	virtual void KeyboardFunc(unsigned char key, int X, int Y)override;
	virtual void Idle()override;

	void DrawPoint();
	void DrawLine();
	void DrawColoredLine();
	void DrawLineStrip();
	void DrawAxes();
	void DrawAxesXYZ();
	void DrawGridXZ();
	void DrawCube();
	void DrawSphere();
	void DrawCone();
	void DrawCylinder();
	void DrawTetrahedron();
	void DrawOctahedron();
	void DrawDodecahedron();
	void DrawIcosahedron();
	void DrawPyramid();
	void DrawFrustumPyramid();
	void DrawPrism();
	void DrawOrtoedro();
	void DrawParalelepipedo();
	void DrawFrustumCone();
	void DrawToro();
};

