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
	GLubyte bitShape[20] = {0};
	for (int i = 0; i < sizeof(bitShape)/sizeof(GLubyte); i++)
	{
		bitShape[i] = 0xff;
	}
	glPixelStorei(GL_UNPACK_ALIGNMENT,1);
	glRasterPos2i(150,150);
	glBitmap(16,16,0.0,0.0,20.0,15.0,bitShape);
	glFlush();
}

int main(int argc,char** argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(0,0);
	glutInitWindowSize(300,300);
	glutCreateWindow("bit map");
	glutDisplayFunc(draw);

	init();
	glutMainLoop();
	return 0;
}

#endif