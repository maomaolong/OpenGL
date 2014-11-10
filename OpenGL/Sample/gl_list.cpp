#include "stdafx.h"

#if 1

#include <gl/glut.h>

void init()
{
	glClearColor(0.0,0.0,0.0,0.0);
	gluOrtho2D(0.0,300.0,0.0,300.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
}

void show()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,0.0,0.0);

	GLuint listID = glGenLists(1);

	glNewList(listID,GL_COMPILE);
		glBegin(GL_TRIANGLE_STRIP);
			glVertex2d(0.0,0.0);
			glVertex2d(300.0,0.0);
			glVertex2d(0.0,300.0);
		glEnd();
	glEndList();

	glCallList(listID);
	glFlush();

}

void winReshape(int width,int height)
{
	glClearColor(0.0,0.0,0.0,0.0);
	gluOrtho2D(0.0,width,0.0,height);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
}

int main(int argc,char **argv)
{
	glutInit(&argc,argv);
	glutInitWindowPosition(0,0);
	glutInitWindowSize(300,300);
	glutCreateWindow("gl list");
	glutDisplayFunc(show);
	glutReshapeFunc(winReshape);
	init();
	glutMainLoop();
	return 0;
}

#endif