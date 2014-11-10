// Sample.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#if 0
#include <gl\glut.h>
void init()
{
	glClearColor(0.0,0.0,0.0,0.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0,100.0,0.0,100.0);
}

void lineSegment()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_LINES);
	    glVertex2i(0,0);
	    glVertex2i(50,50);
	glEnd();
	glFlush();
}

int _tmain(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(0,0);
	glutInitWindowSize(300,300);
	glutCreateWindow("draw a line");

	init();
	glutDisplayFunc(lineSegment);
	glutMainLoop();
	return 0;
}
#endif 



