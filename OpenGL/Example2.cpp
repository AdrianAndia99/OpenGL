#include "Example2.h"
#include "IncludeGL.h"

Example2::Example2()
{
}


void Example2::init()
{
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	glClearDepth(1.0);
	gluLookAt(5, 5, 5, 0, 0, 0, 0, 1, 0);
	glMatrixMode(GL_MODELVIEW);
}
void Example2::Render()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	//Example::DrawAxis(10);
	Example::DrawGrids(10.0f, 1.0f);
	DrawCube();
	glFlush();

}
void Example2::DrawCube() {
	glColor3f(0.5f, 0.5f, 0.5f); 
	glutSolidCube(1.0f); 
}

void Example2::KeyboardFunc(unsigned char key, int X, int Y)
{

}


void Example2::Idle()
{

}
