#include "Example1.h"
#include "IncludeGL.h"
#include <iostream>

int selectedFigure = 0;

Example1::Example1()
{
}


void Example1::init()
{
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	glClearDepth(1.0);
	gluLookAt(0, 0, -10, 0, 0, 0, 0, 1, 0); //esto para ver solo en el eje X Y
	//gluLookAt(5 ,5 ,5 ,0 ,0 ,0 ,0 ,1 ,0);
	glMatrixMode(GL_MODELVIEW);
	glPointSize(10.0f);
}
void Example1::Render()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	/*switch (selectedFigure) {
	case 1:
		DrawPoint();
		break;
	case 2:
		DrawLine();
		break;
	case 3:
		DrawColoredLine();
		break;
	case 4:
		DrawLineStrip();
		break;
	case 5:
		DrawAxesXYZ();
		break;
	case 6:
		DrawGridXZ();
		break;
	default:
		std::cout << "Seleccione una opcion del menu." << std::endl;
		break;
	} esto es pal menu de lineas*/
	switch (selectedFigure) {
	case 1:
		DrawCube();
		break;
	case 2:
		DrawSphere();
		break;
	case 3:
		DrawCone();
		break;
	case 4:
		DrawCylinder();
		break;
	case 5:
		DrawTetrahedron();
		break;
	case 6:
		DrawOctahedron();
		break;
	case 7:
		DrawDodecahedron();
		break;
	case 8:
		DrawIcosahedron();
		break;
	case 9:
		DrawPyramid();
		break;
	case 10:
		DrawFrustumPyramid();
		break;
	case 11:
		DrawPrism();
		break;
	case 12:
		DrawOrtoedro();
		break;
	case 13:
		DrawParalelepipedo();
		break;
	case 14:
		DrawFrustumCone();
		break;
	case 15:
		DrawToro();
		break;
	default:
		std::cout << "Seleccione una figura geometrica del menu." << std::endl;
		break;
	}

	glFlush();
	
}
void Example1::DrawPoint()
{
	std::cout << "DrawPoint" << std::endl;
	glColor3f(1.0f, 0.0f, 0.0f);
	glBegin(GL_POINTS);
	glVertex3f(0.0f, 0.0f, 0.0f); // Coordenadas del punto
	glEnd();

}

void Example1::DrawLine()
{
	std::cout << "DrawLine" << std::endl;

	// Establecer el color de la línea
	glColor3f(0.0f, 1.0f, 0.0f); // Color verde

	// Dibujar la línea
	glBegin(GL_LINES);
	glVertex3f(-1.0f, -1.0f, 0.0f); // Primer punto de la línea
	glVertex3f(1.0f, 1.0f, 0.0f);  // Segundo punto de la línea
	glEnd();

}

void Example1::DrawColoredLine()
{
	std::cout << "DrawColoredLine" << std::endl;

	// Dibujar línea con un gradiente de colores
	glBegin(GL_LINES);

	// Color en el primer extremo de la línea
	glColor3f(1.0f, 0.0f, 0.0f); // Color rojo
	glVertex3f(-1.0f, -1.0f, 0.0f); // Primer punto

									// Color en el segundo extremo de la línea
	glColor3f(0.0f, 0.0f, 1.0f); // Color azul
	glVertex3f(1.0f, 1.0f, 0.0f);  // Segundo punto

	glEnd();

}

void Example1::DrawLineStrip()
{
	std::cout << "DrawLineStrip" << std::endl;

	// Definir los puntos de la cadena de líneas
	GLfloat vertices[] = {
		-1.0f, -1.0f, 0.0f,
		0.0f,  1.0f, 0.0f,
		1.0f, -1.0f, 0.0f,
		0.5f,  0.5f, 0.0f,
		-0.5f, -0.5f, 0.0f
	};

	// Configurar el color de la línea
	glColor3f(0.0f, 1.0f, 0.0f); // Color verde

								 // Dibujar la cadena de líneas
	glBegin(GL_LINE_STRIP);
	for (int i = 0; i < sizeof(vertices) / sizeof(vertices[0]); i += 3) {
		glVertex3f(vertices[i], vertices[i + 1], vertices[i + 2]);
	}
	glEnd();

}

void Example1::DrawAxes()
{
	std::cout << "DrawAxes" << std::endl;

	// Dibujar el eje X
	glColor3f(1.0f, 0.0f, 0.0f); // Color rojo
	glBegin(GL_LINES);
	glVertex3f(-10.0f, 0.0f, 0.0f); // Inicio del eje X
	glVertex3f(10.0f, 0.0f, 0.0f);  // Fin del eje X
	glEnd();

	// Dibujar el eje Y
	glColor3f(0.0f, 1.0f, 0.0f); // Color verde
	glBegin(GL_LINES);
	glVertex3f(0.0f, -10.0f, 0.0f); // Inicio del eje Y
	glVertex3f(0.0f, 10.0f, 0.0f);  // Fin del eje Y
	glEnd();

}

void Example1::DrawAxesXYZ()
{
	std::cout << "DrawAxes" << std::endl;

	// Dibujar el eje X
	glColor3f(1.0f, 0.0f, 0.0f); // Color rojo
	glBegin(GL_LINES);
	glVertex3f(-10.0f, 0.0f, 0.0f); // Inicio del eje X
	glVertex3f(10.0f, 0.0f, 0.0f);  // Fin del eje X
	glEnd();

	// Dibujar el eje Y
	glColor3f(0.0f, 1.0f, 0.0f); // Color verde
	glBegin(GL_LINES);
	glVertex3f(0.0f, -10.0f, 0.0f); // Inicio del eje Y
	glVertex3f(0.0f, 10.0f, 0.0f);  // Fin del eje Y
	glEnd();

	// Dibujar el eje Z
	glColor3f(0.0f, 0.0f, 1.0f); // Color azul
	glBegin(GL_LINES);
	glVertex3f(0.0f, 0.0f, -10.0f); // Inicio del eje Z
	glVertex3f(0.0f, 0.0f, 10.0f);  // Fin del eje Z
	glEnd();

}

void Example1::DrawGridXZ()
{
	std::cout << "DrawGrid" << std::endl;

	// Configurar el color de la rejilla
	glColor3f(0.5f, 0.5f, 0.5f); // Color gris

								 // Tamaño de la rejilla
	float gridSize = 10.0f;
	float step = 1.0f; // Espaciado entre las líneas

					   // Dibujar las líneas en el plano XZ (paralelas al eje Z)
	glBegin(GL_LINES);
	for (float i = -gridSize; i <= gridSize; i += step) {
		glVertex3f(i, 0.0f, -gridSize); // Línea desde el extremo negativo del eje Z
		glVertex3f(i, 0.0f, gridSize);  // Línea hasta el extremo positivo del eje Z
	}
	glEnd();

	// Dibujar las líneas en el plano XZ (paralelas al eje X)
	glBegin(GL_LINES);
	for (float i = -gridSize; i <= gridSize; i += step) {
		glVertex3f(-gridSize, 0.0f, i); // Línea desde el extremo negativo del eje X
		glVertex3f(gridSize, 0.0f, i);  // Línea hasta el extremo positivo del eje X
	}
	glEnd();
}

void Example1::DrawCube()
{
	glutWireCube(1.0);
}

void Example1::DrawSphere()
{
	glutWireSphere(1.0, 20, 20);
}

void Example1::DrawCone()
{
	glutWireCone(1.0, 2.0, 20, 20);
}

void Example1::DrawCylinder()
{
	GLUquadric* quadric = gluNewQuadric();
	gluCylinder(quadric, 1.0, 1.0, 2.0, 20, 20);
	gluDeleteQuadric(quadric);
}

void Example1::DrawTetrahedron()
{
	glutWireTetrahedron();
}

void Example1::DrawOctahedron()
{
	glutWireOctahedron();
}

void Example1::DrawDodecahedron()
{
	glutWireDodecahedron();
}

void Example1::DrawIcosahedron()
{
	glutWireIcosahedron();
}

void Example1::DrawPyramid()
{
	glBegin(GL_TRIANGLES);
	// Base
	glVertex3f(-1.0f, 0.0f, -1.0f);
	glVertex3f(1.0f, 0.0f, -1.0f);
	glVertex3f(0.0f, 1.0f, 0.0f);

	glVertex3f(1.0f, 0.0f, -1.0f);
	glVertex3f(1.0f, 0.0f, 1.0f);
	glVertex3f(0.0f, 1.0f, 0.0f);

	glVertex3f(1.0f, 0.0f, 1.0f);
	glVertex3f(-1.0f, 0.0f, 1.0f);
	glVertex3f(0.0f, 1.0f, 0.0f);

	glVertex3f(-1.0f, 0.0f, 1.0f);
	glVertex3f(-1.0f, 0.0f, -1.0f);
	glVertex3f(0.0f, 1.0f, 0.0f);
	glEnd();
}

void Example1::DrawFrustumPyramid()
{
	glBegin(GL_QUADS);
	// Base
	glVertex3f(-1.0f, 0.0f, -1.0f);
	glVertex3f(1.0f, 0.0f, -1.0f);
	glVertex3f(1.0f, 0.0f, 1.0f);
	glVertex3f(-1.0f, 0.0f, 1.0f);

	// Lados (tronco)
	glVertex3f(-0.5f, 1.0f, -0.5f);
	glVertex3f(0.5f, 1.0f, -0.5f);
	glVertex3f(0.5f, 0.0f, -0.5f);
	glVertex3f(-0.5f, 0.0f, -0.5f);
	glEnd();
}

void Example1::DrawPrism()
{
	glBegin(GL_QUADS);
	glVertex3f(-1.0f, -1.0f, -1.0f);
	glVertex3f(1.0f, -1.0f, -1.0f);
	glVertex3f(1.0f, 1.0f, -1.0f);
	glVertex3f(-1.0f, 1.0f, -1.0f);
	glEnd();
}

void Example1::DrawOrtoedro()
{
	glBegin(GL_QUADS);
	glVertex3f(-1.0f, -1.0f, -2.0f);
	glVertex3f(1.0f, -1.0f, -2.0f);
	glVertex3f(1.0f, 1.0f, -2.0f);
	glVertex3f(-1.0f, 1.0f, -2.0f);
	glEnd();
}

void Example1::DrawParalelepipedo()
{
	glBegin(GL_QUADS);
	glVertex3f(-1.0f, -0.5f, -1.0f);
	glVertex3f(1.0f, -0.5f, -1.0f);
	glVertex3f(1.0f, 0.5f, -1.0f);
	glVertex3f(-1.0f, 0.5f, -1.0f);
	glEnd();
}

void Example1::DrawFrustumCone()
{
	GLUquadric* quadric = gluNewQuadric();
	gluCylinder(quadric, 1.0, 0.5, 2.0, 20, 20);
	gluDeleteQuadric(quadric);
}

void Example1::DrawToro()
{
	glutWireTorus(0.5, 1.0, 20, 20);
}

void Example1::KeyboardFunc(unsigned char key, int X, int Y)
{
	/*switch (key) {
	case '1':
		selectedFigure = 1; // Dibujar punto
		std::cout << "Has seleccionado dibujar un punto." << std::endl;
		break;
	case '2':
		selectedFigure = 2; // Dibujar línea
		std::cout << "Has seleccionado dibujar una linea." << std::endl;
		break;
	case '3':
		selectedFigure = 3; // Dibujar línea coloreada
		std::cout << "Has seleccionado dibujar una linea coloreada." << std::endl;
		break;
	case '4':
		selectedFigure = 4; // Dibujar cadena de líneas
		std::cout << "Has seleccionado dibujar una cadena de lineas." << std::endl;
		break;
	case '5':
		selectedFigure = 5; // Dibujar ejes XYZ
		std::cout << "Has seleccionado dibujar ejes XYZ." << std::endl;
		break;
	case '6':
		selectedFigure = 6; // Dibujar rejilla en el plano XZ
		std::cout << "Has seleccionado dibujar una rejilla en el plano XZ." << std::endl;
		break;
	case 27: // Tecla 'Esc' para salir
		exit(0);
	default:
		std::cout << "Opcion no valida." << std::endl;
		break;
	} para lo de la numero 4*/

	switch (key) {
	case '1':
		selectedFigure = 1; // Cubo
		break;
	case '2':
		selectedFigure = 2; // Esfera
		break;
	case '3':
		selectedFigure = 3; // Cono
		break;
	case '4':
		selectedFigure = 4; // Cilindro
		break;
	case '5':
		selectedFigure = 5; // Tetraedro
		break;
	case '6':
		selectedFigure = 6; // Octaedro
		break;
	case '7':
		selectedFigure = 7; // Dodecaedro
		break;
	case '8':
		selectedFigure = 8; // Icosaedro
		break;
	case '9':
		selectedFigure = 9; // Pirámide
		break;
	case '0':
		selectedFigure = 10; // Tronco de pirámide
		break;
	case 'q':
		selectedFigure = 11; // Prisma
		break;
	case 'w':
		selectedFigure = 12; // Ortoedro
		break;
	case 'e':
		selectedFigure = 13; // Paralelepípedo
		break;
	case 'r':
		selectedFigure = 14; // Tronco de cono
		break;
	case 't':
		selectedFigure = 15; // Toro
		break;
	case 27: // Esc
		exit(0);
	default:
		std::cout << "Opcion no valida." << std::endl;
		break;
	}

	glutPostRedisplay();
}


void Example1::Idle()
{

}