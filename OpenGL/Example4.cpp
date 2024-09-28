#include "Example4.h"
#include <cmath>
Example4::Example4()
{
}

void Example4::init()
{
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	glClearDepth(1.0);
	camera.Init();
}

void Example4::Render()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	//cameraThirdPerson.updateCamera(sphere.positionSphere); no funciona
	camera.updateCamera();
	//Example::DrawAxis(10);
    Example::DrawGrids(100.0f, 1.0f);
    //example2.DrawCube();
	sphere.Render();
	glFlush();
}

void Example4::KeyboardFunc(unsigned char key, int X, int Y)
{
	switch (key)
	{
	case 'a':
		camera.position.x += 0.05;
		break;
	case 'd':
		camera.position.x -= 0.05;
		break;
	case 'w':
		camera.position.z += 0.05;
		break;
	case 's':
		camera.position.z -= 0.05;
		break;
	case 'q':
		sphere.positionSphere.x -= 0.05; // Mover la esfera hacia la izquierda
		break;
	case 'e':
		sphere.positionSphere.x += 0.05; // Mover la esfera hacia la derecha
		break;
	case 'z':
		sphere.positionSphere.z += 0.05; // Mover la esfera hacia adelante
		break;
	case 'c':
		sphere.positionSphere.z -= 0.05; // Mover la esfera hacia atrás
		break;
	}
	std::cout << "camera.position.x: " << camera.position.x << std::endl;

	glutPostRedisplay();
}

void Example4::Idle()
{
}


