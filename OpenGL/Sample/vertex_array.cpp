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

void draw()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,0.0,0.0);
	glEnableClientState(GL_VERTEX_ARRAY);
	//GLint pt[][2] = {{150,0},{300,150},{200,300},{100,300},{0,150}};//м╛об
	GLint pt[] = {150,0,300,150,200,300,100,300,0,150};
	glVertexPointer(2,GL_INT,0,&pt);
	GLubyte verIdx[] = {0,1,2,3,4,};
	glDrawElements(GL_TRIANGLE_STRIP,10,GL_UNSIGNED_BYTE,verIdx);
	glFlush();
}

int main(int argc,char** argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(0,0);
	glutInitWindowSize(300,300);
	glutCreateWindow("vertex array");

	init();
	glutDisplayFunc(draw);
	glutMainLoop();
	return 0;
}

#endif