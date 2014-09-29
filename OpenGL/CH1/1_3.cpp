
#include "stdafx.h"
#define  ENABLE 0
#if ENABLE
#include <stdio.h>
static GLfloat spin = 0.0;

void init()
{
	glClearColor(0.0,0.0,0.0,0.0);
	glShadeModel(GL_FLAT);
}

void display(void)
{
	//int i = 0;
	//while (i<10000000)
	//{
	//	i++;
	//}
	printf("display\n");
	glClear(GL_COLOR_BUFFER_BIT);
	glPushMatrix();  
	glRotatef(spin,0.0,0.0,-1.0);
	//glRotatef(spin,0.0,1.0,0.0);
	//glRotatef(spin,1.0,0.0,0.0);
	glColor3f(1.0,1.0,1.0);
	glRectf(-0.25,-0.25,0.25,0.25);
	glPopMatrix();
	glutSwapBuffers();
}

void spinDisplay(void)
{
	printf("spinDisplay\n");
	spin = spin + 2.0;
	if (spin > 360)
	{
		spin = spin - 360;
	}
	glutPostRedisplay();
}

void reshape(int w, int h)
{
	printf("reshape\n");
	glViewport(0,0,(GLsizei)w,(GLsizei)h);
	glMatrixMode(GL_POLYGON);
	glLoadIdentity();
	glOrtho(-50,50,-50,50,-1,1);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}

void mouse(int button,int state,int x,int y)
{
	switch (button)
	{
	case GLUT_LEFT_BUTTON:
		{
			if (state == GLUT_DOWN)
			{
				printf("GLUT_LEFT_BUTTON\n");
				glutIdleFunc(spinDisplay);
			}
			break;
		}
	case GLUT_MIDDLE_BUTTON:
		{
			if (state == GLUT_DOWN)
			{
				printf("GLUT_MIDDLE_BUTTON x = %d y = %d\n",x,y);
				glutIdleFunc(NULL);
			}
			break;
		}
	default:
		break;
		
	}
}

int main(int argc, char *argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
	glutInitWindowPosition(220, 200);
	glutInitWindowSize(800, 800);
	glutCreateWindow("hello");
	init();
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutMouseFunc(mouse);
	glutMainLoop();
	return 0;
}

#endif