#include "stdafx.h"

#if 0
#include <gl/glut.h>

void init()
{
	glClearColor(0.0,0.0,0.0,0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0,300.0,0.0,300.0);
}

void drawStar()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_LINE_LOOP);
		glVertex2i(150,300);
		glVertex2i(60,0);
		glVertex2i(300,200);
		glVertex2i(0,200);
		glVertex2i(240,0);
	glEnd();
	glFlush();
}

int main(int argc, char* argv[])
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(0,0);
	glutInitWindowSize(300,300);
	glutCreateWindow("draw a star");
	init();
	glutDisplayFunc(drawStar);
	glutMainLoop();
	return 0;
}

#endif
