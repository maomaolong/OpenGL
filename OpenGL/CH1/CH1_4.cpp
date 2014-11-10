
#include "stdafx.h"
#define ENABLE 1
#if ENABLE
#include <cstdlib>
#include <cstdio>
#include <ctime>
static GLint day = 200;
GLint count = 0;
GLfloat tstart = 0.0;
GLfloat tend = 0.0;
GLboolean canPrint = true;
void myDisplay(void)
{
	++count;
	if (count>=100)
	{
		if (canPrint)
		{
			
			tend = clock();
			GLfloat t = tend - tstart;
			printf("\nFPS:%f",(float)count*1000.0/t);
			canPrint = false;
		}
	}
	glClearColor(0.0,0.0,0.0,0.0);
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(75,1,1,400000000);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluLookAt(0,-200000000,200000000,0,0,0,0,0,1);

	glColor3f(1.0,0,0);
	glutSolidSphere(69600000,20,20);

	glColor3f(0.0,0.0,1.0);
	glRotatef(day/360.0*360.0,0.0,0.0,-1.0);
	glTranslatef(150000000,0.0,0.0);
	glutSolidSphere(15945000,20,20);

	glColor3f(1.0,1.0,0.0);
	glRotatef(day/30.0*360.0 - day/360.0*360.0,0.0,0.0,-1.0);
	glTranslatef(38000000,0.0,0.0);
	glutSolidSphere(4345000,20,20);
	
	glFlush();
	glutSwapBuffers();
}

void myIdle(void)
{
	++day;
	if (day>360)
	{
		day = 0;
	}
	myDisplay();
}

int main(int argc, char *argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
	glutInitWindowPosition(220, 200);
	glutInitWindowSize(800, 800);
	glutCreateWindow("Ì«Ñô¡¢µØÇòºÍÔÂÁÁ");
	glutDisplayFunc(myDisplay);
	glutIdleFunc(myIdle);
	tstart = clock();
	printf("clock = %f",tstart); 

	glutMainLoop();
	return 0;
}

#endif