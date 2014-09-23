
#include "stdafx.h"
#define ENABLE 0
#if ENABLE
#include <gl\glut.h>

void myDisplay(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glRectf(-0.5f, -0.5f, 0.5f, 0.5f);
	glFlush();
}

int main(int argc, char *argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowPosition(220, 200);
	glutInitWindowSize(800, 800);
	glutCreateWindow("第一个OpenGL程序");
	glutDisplayFunc(&myDisplay);
	glutMainLoop();
	return 0;
}

#endif