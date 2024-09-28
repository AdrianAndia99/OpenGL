#include "Example1.h"
#include "IncludeGL.h"
Example1::Example1()
{
}


void Example1::init()
{
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	glClearDepth(1.0);
	gluLookAt(5, 5, 5, 0, 0, 0, 0, 1, 0);
	glMatrixMode(GL_MODELVIEW);
}
void Example1::Render()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	Example::DrawGrids(10,1);
	DrawPoint();
	DrawLine();
	DrawAxis();
	glFlush();
	
}
void Example1::DrawPoint()
{
	glPointSize(10);
	glBegin(GL_POINTS);
		glVertex3f(1.0f, 1.0f, 0.0f);
	glEnd(); 
}

void Example1::DrawLine()
{
	glLineWidth(5);
	glColor4f(0.0f, 1.0f, 0.0f, 0.0f);
	glBegin(GL_LINES);
		glVertex3f(2.0f, 1.0f, 0.0f);
		glVertex3f(3.0f, 4.0f, 0.0f);
	glEnd();
}
void Example1::DrawAxis() 
{
	glLineWidth(4);

	glColor4f(0.0f, 1.0f, 0.0f, 0.0f);
	glBegin(GL_LINES);
		glVertex3f(0.0f, 10.0f, 0.0f);
		glVertex3f(0.0f, -10.0f, 0.0f);
	glEnd();

	glColor4f(1.0f, 0.0f, 0.0f, 0.0f);
	glBegin(GL_LINES);
		glVertex3f(10.0f, 0.0f, 0.0f);
		glVertex3f(-10.0f, 0.0f, 0.0f);
	glEnd();

	glColor4f(0.0f, 0.0f, 1.0f, 0.0f);
	glBegin(GL_LINES);
		glVertex3f(0.0f, 0.0f, 10.0f);
		glVertex3f(0.0f, 0.0f, -10.0f);
	glEnd();
}


void Example1::KeyboardFunc(unsigned char key, int X, int Y)
{

}


void Example1::Idle()
{

}