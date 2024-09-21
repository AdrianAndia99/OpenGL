#include "Example2.h"
#include "IncludeGL.h"
#include <iostream>

Example2::Example2()
{
    // Inicializar variables de transformaci�n
    translateX = 0.0f;
    translateY = 0.0f;
    translateZ = 0.0f;
    rotateAngle = 0.0f;
    scaleX = 1.0f;
    scaleY = 1.0f;
    scaleZ = 1.0f;

    // Inicializar con el caso 0 (por ejemplo, punto)
    currentCase = 0;
}

void Example2::init()
{
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);  // Fondo negro
    glClearDepth(1.0);  // Limpiar el buffer de profundidad
    gluLookAt(5, 5, 5, 0, 0, 0, 0, 1, 0);  // Posicionar la c�mara

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45.0, 1.0, 0.1, 100.0);  // Vista en perspectiva

    glMatrixMode(GL_MODELVIEW);
}

void Example2::Render()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    std::cout << "Dibujando Caso: " << currentCase << std::endl;

    // Aplicar transformaciones geom�tricas antes de dibujar
    glPushMatrix();

    glTranslatef(translateX, translateY, translateZ);  // Traslaci�n
    glRotatef(rotateAngle, 0.0f, 0.0f, 1.0f);  // Rotaci�n en Z
    glScalef(scaleX, scaleY, scaleZ);  // Escalado

    switch (currentCase) {
    case 1: // Dibujar un punto
        DrawPoint();
        break;
    case 2: // Dibujar una l�nea
        DrawLine();
        break;
    case 5: // Dibujar los ejes de coordenadas X y Y
        DrawAxesXY();
        break;
    default:
        std::cout << "Caso no v�lido" << std::endl;
        break;
    }

    glPopMatrix();

    glFlush();
}

void Example2::DrawPoint()
{
    std::cout << "Dibujando Punto" << std::endl;

    glPointSize(10.0f);  // Tama�o del punto
    glBegin(GL_POINTS);
    glColor3f(1.0f, 0.0f, 0.0f);  // Rojo
    glVertex2f(0.0f, 0.0f);  // Coordenada (0, 0)
    glEnd();
}

void Example2::DrawLine()
{
    std::cout << "Dibujando L�nea" << std::endl;

    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);  // Blanco
    glVertex2f(-1.0f, -1.0f);     // V�rtice inicial
    glVertex2f(1.0f, 1.0f);       // V�rtice final
    glEnd();
}

void Example2::DrawAxesXY()
{
    std::cout << "Dibujando Ejes X y Y" << std::endl;

    glBegin(GL_LINES);

    // Eje X - Color Rojo
    glColor3f(1.0f, 0.0f, 0.0f);  // Rojo
    glVertex2f(-10.0f, 0.0f);     // Extremo izquierdo del eje X
    glVertex2f(10.0f, 0.0f);      // Extremo derecho del eje X

    // Eje Y - Color Verde
    glColor3f(0.0f, 1.0f, 0.0f);  // Verde
    glVertex2f(0.0f, -10.0f);     // Extremo inferior del eje Y
    glVertex2f(0.0f, 10.0f);      // Extremo superior del eje Y

    glEnd();
}

void Example2::KeyboardFunc(unsigned char key, int X, int Y)
{
    switch (key) {
    case '1':
        currentCase = 1; // Dibujar punto
        break;
    case '2':
        currentCase = 2; // Dibujar l�nea
        break;
    case '5':
        currentCase = 5; // Dibujar ejes X y Y
        break;
    case 'w':  // Mover hacia arriba (traslaci�n en Y)
        translateY += 0.1f;
        break;
    case 's':  // Mover hacia abajo (traslaci�n en Y)
        translateY -= 0.1f;
        break;
    case 'a':  // Mover hacia la izquierda (traslaci�n en X)
        translateX -= 0.1f;
        break;
    case 'd':  // Mover hacia la derecha (traslaci�n en X)
        translateX += 0.1f;
        break;
    case 'q':  // Rotar en sentido antihorario
        rotateAngle += 5.0f;
        break;
    case 'e':  // Rotar en sentido horario
        rotateAngle -= 5.0f;
        break;
    case '+':  // Aumentar escala
        scaleX += 0.1f;
        scaleY += 0.1f;
        scaleZ += 0.1f;
        break;
    case '-':  // Disminuir escala
        scaleX -= 0.1f;
        scaleY -= 0.1f;
        scaleZ -= 0.1f;
        break;
    default:
        std::cout << "Tecla no valida" << std::endl;
        break;
    }

    // Redibujar la ventana
    glutPostRedisplay();
}

void Example2::Idle()
{
    // No se est� usando
}