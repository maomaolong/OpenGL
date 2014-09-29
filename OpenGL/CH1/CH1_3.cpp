
#include "stdafx.h"
#define ENABLE 1
#if ENABLE
#include <cstdlib>
#include <cstdio>
void myDisplay(void)
{
	static GLubyte Mask[128];
	FILE *fb;
	fopen_s(&fb,"mask.bmp","rb");
	if (!fb)
	{
		exit(0);
	}
	if (fseek(fb,-(int)sizeof(Mask),SEEK_END))
	{
		exit(0);
	}
	if (!fread(Mask,sizeof(Mask),1,fb))
	{
		exit(0);
	}
	fclose(fb);

	glClear(GL_COLOR_BUFFER_BIT);
	glEnable(GL_POLYGON_STIPPLE);
	glPolygonStipple(Mask);
	glPolygonMode(GL_FRONT,GL_FILL);
	glPolygonMode(GL_BACK,GL_LINE);
	glRectf(0.0f, 0.0f, 1.0f, 1.0f);
	glDisable(GL_POLYGON_STIPPLE);
	glRectf(-1.0f, -1.0f, 0.0f, 0.0f);
	glFlush();
}

int main(int argc, char *argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowPosition(220, 200);
	glutInitWindowSize(800, 800);
	glutCreateWindow("镂空效果正方形");
	glutDisplayFunc(myDisplay);
	glutMainLoop();
	return 0;
}

#endif