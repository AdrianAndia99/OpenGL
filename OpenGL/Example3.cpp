#include "Example3.h"
#include "IncludeGL.h"

Example3::Example3()
{
}


void Example3::init()
{
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	glClearDepth(1.0);
	gluLookAt(5, 5, 5, 0, 0, 0, 0, 1, 0);
	glMatrixMode(GL_MODELVIEW);
}
void Example3::Render()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	//Example::DrawAxis(10);
	Example::DrawGrids(10.0f, 1.0f);
	//DrawrRotation();
	//DrawTranslate();
	DrawScale();
	glFlush();

}
void Example3::DrawrRotation()
{
	glPushMatrix();
	//glTranslatef(0.0, 0.0, 0.0);
	glRotatef(angle, 0.0, 0.0, 1.0);
	Example::DrawAxis(3);
	glPopMatrix();
}

void Example3::DrawTranslate()
{
	glPushMatrix();
	//glTranslatef(0.0, 0.0, 0.0);
	glTranslatef(1.0, 2.0, 3.0);
	Example::DrawAxis(3);
	glPopMatrix();
}

void Example3::DrawScale()
{
	glPushMatrix();
	glScalef(1.0, 2.0, 3.0);
	Example::DrawAxis(3);
	glPopMatrix();
}

void Example3::KeyboardFunc(unsigned char key, int X, int Y)
{
	switch (key)
	{
	case 'A':
		angle += 0.5;
		break;
	case 'D':
		angle -= 0.5;
		break;
	case 'W':

		break;
	case 'S':

		break;
	case 'Q':

		break;
	case 'E':

		break;
	default:
		break;
	}
	std::cout << "angle: " << angle << std::endl;
}


void Example3::Idle()
{

}