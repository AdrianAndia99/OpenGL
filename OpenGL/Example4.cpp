#include "Example4.h"
#include "IncludeGL.h"
Example4::Example4()
{
}


void Example4::init()
{
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	glClearDepth(1.0);
	gluLookAt(5, 5, 5, 0, 0, 0, 0, 1, 0);
	glMatrixMode(GL_MODELVIEW);
}
void Example4::Render()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	Example::DrawGrids(10, 1);
	DrawSphere();
	Ligth();
	//DrawAxis();
	glFlush();

}
void Example4::DrawSphere()
{
	material();
	sphere.drawSphere();
}

void Example4::DrawLine()
{
	glLineWidth(2);
	glColor4f(0.0f, 1.0f, 0.0f, 0.0f);
	glBegin(GL_LINES);
	glVertex3f(6.0f, 2.0f, 0.0f);
	glVertex3f(6.0f, 2.0f, 0.0f);
	glEnd();
}
void Example4::DrawAxis()
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

void Example4::Ligth()
{
	GLfloat ambient[] = { 0.2, 0.2, 0.2, 1.0 };//luz ambiental
	GLfloat diffuse[] = { 1.0, 1.0, 1.0, 1.0 };//luz difusa
	GLfloat specular[] = { 1.0, 1.0, 1.0, 1.0 };//luz especular
	GLfloat position[] = { 2.5, 2.5, 2.5, 0.0 };//posicion de la luz

	glClearColor(0.0, 0.0, 0.0, 0.0);
	glShadeModel(GL_SMOOTH);//sombreado suave

	glEnable(GL_LIGHTING);//activar iluminacion
	glEnable(GL_LIGHT0);//activar luz numero 0

	//Parametros de la luz
	glLightfv(GL_LIGHT0, GL_AMBIENT, ambient);
	glLightfv(GL_LIGHT0, GL_DIFFUSE, diffuse);
	glLightfv(GL_LIGHT0, GL_SPECULAR, specular);
	glLightfv(GL_LIGHT0, GL_POSITION, position);

	glEnable(GL_DEPTH_TEST);
}

void Example4::material()
{
	GLfloat mat_ambient[] = { 0.7, 0.7, 0.7, 1.0 }; // Componente ambiental del material
	GLfloat mat_diffuse[] = { 0.8, 0.8, 0.8, 1.0 }; // Componente difusa del material
	GLfloat mat_specular[] = { 1.0, 1.0, 1.0, 1.0 }; // Componente especular del material
	GLfloat mat_shininess[] = { 100.0 }; // Brillo del material

	//Parámetros del material
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
	glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
	glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);

	glEnable(GL_DEPTH_TEST);
}

void Example4::KeyboardFunc(unsigned char key, int X, int Y)
{

}


void Example4::Idle()
{

}