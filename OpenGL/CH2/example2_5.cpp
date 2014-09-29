#include "stdafx.h"
#define ENABLE 0
#if ENABLE
#include <cstdio>
GLint WIN_WIDE = 500;
GLint WIN_HEIGHT = 500;

#define drawOneLine(x1,y1,x2,y2) glBegin(GL_LINES);\
		glVertex2f((x1),(y1));glVertex2f((x2),(y2));glEnd();

void init(void)
{
	glClearColor(0.0,0.0,0.0,0.0);
	glShadeModel(GL_FLAT);
}
void display(void)
{
	printf("display\n");
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 1.0, 1.0);
	glEnable(GL_LINE_STIPPLE);
	glLineStipple(1, 0x0101);
	glLineWidth(5);
	drawOneLine(WIN_WIDE*0.2, WIN_HEIGHT*0.5, WIN_WIDE*(1-0.2), WIN_HEIGHT*0.5);
	glDisable(GL_LINE_STIPPLE);
	glFlush();
}

void reshape(GLint w,GLint h)
{
	printf("reshape w = %d h = %d\n",w,h);
	WIN_WIDE = w;
	WIN_HEIGHT = h;
	glViewport(0,0,(GLsizei)w,(GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0,(GLdouble)w,0.0,(GLdouble)h);
}

int main(int argc, char *argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowPosition(300, 300);
	glutInitWindowSize(WIN_WIDE, WIN_HEIGHT);
	glutCreateWindow("直线点画模式");
	init();
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutMainLoop();
	return 0;
}

#endif

