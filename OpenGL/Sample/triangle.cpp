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

void drawTriangle()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_TRIANGLE_STRIP);//GL_TRIANGLES,GL_TRIANGLE_FAN
		glVertex2i(150,0);
		glVertex2i(300,150);
		glVertex2i(200,300);
		glVertex2i(100,300);
		glVertex2i(0,150);
	glEnd();
	glFlush();
}

int main(int argc,char** argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(0,0);
	glutInitWindowSize(300,300);
	glutCreateWindow("triangle");
	init();
	glutDisplayFunc(drawTriangle);
	glutMainLoop();
	return 0;
}
#endif