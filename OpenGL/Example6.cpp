#include "Example6.h"
#include "IncludeGL.h"
#include "Cubo.h"
#include "BMPtextureManager.h"
#include "Esfera.h"
#include "Cuadrado.h"
#include "Triangulo.h"
Example6::Example6()
{
	

}

void Example6::init()
{
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	glClearDepth(1.0);
	gluLookAt(5, 5, 5, 0, 0, 0, 0, 1, 0);
	glMatrixMode(GL_MODELVIEW);
	figura = new Esfera();
	((Esfera*)figura)->initMaterial("./Textura/Lab6.bmp");
}

void Example6::Render()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	DrawGrids(10.0f, 1.0f);
	((Esfera*)figura)->Render();
	//DrawAxis(10);
	glFlush();
}

void Example6::KeyboardFunc(unsigned char key, int X, int Y)
{
}

void Example6::Idle()
{
}

 
