#include "stdafx.h"
#define ENABLE 0
#if ENABLE
#include <cmath>
#include <cassert>
static GLfloat PI = 3.1415926;
static GLint POINT = 100;
void myDisplay(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0,1.0,0.0);
	glBegin(GL_LINE_LOOP);
	GLfloat angle = 0.0;
	for (GLint i = 0;i<POINT;i++)
	{
		assert(POINT);
		angle = 2*PI*i/POINT;
		glVertex2f(cos(angle),sin(angle));
	}
	glEnd();
	glFlush();
}

int main(int argc, char *argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowPosition(300, 300);
	glutInitWindowSize(500, 500);
	glutCreateWindow("»æÖÆÒ»¸öÂÖÀªÔ²");
	glutDisplayFunc(&myDisplay);
	glutMainLoop();
	return 0;
}

#endif

