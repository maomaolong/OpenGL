#include "stdafx.h"
#define ENABLE 0
#if ENABLE
#include <gl\glut.h>

void myDisplay(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0,1.0,0.0);
	//glBegin(GL_POINTS);
	//glBegin(GL_LINE_STRIP);
	glBegin(GL_POLYGON);
		glVertex2f(-0.5,0.5);
		glVertex2f(0.5,0.5);
		glVertex2f(1.0,0.0);
		glVertex2f(0.5,-0.5);
		glVertex2f(-0.5,-0.5);
	glEnd();
	glFlush();
}

int main(int argc, char *argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowPosition(300, 300);
	glutInitWindowSize(500, 500);
	glutCreateWindow("Ìî³ä¶à±ßÐÎ");
	glutDisplayFunc(&myDisplay);
	glutMainLoop();
	return 0;
}

#endif

