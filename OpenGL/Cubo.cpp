#include "Cubo.h"
#include <GL/glut.h>
#include "BMPtextureManager.h"


Cubo::Cubo()
{
}

void Cubo::Render()
{
	material->Enable();
	DrawCube();
	material->Disable();
}

void Cubo::DrawCube()
{	 
	glutSolidCube(1.0f);
}
