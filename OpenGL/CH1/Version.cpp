#include "stdafx.h"
#define ENABLE 0
#if ENABLE
#include <stdio.h>

void display(void)
{
	printf("OpenGLʵ�ֳ��̵����֣�%s\n", glGetString(GL_VENDOR));
	printf("��Ⱦ����ʶ����%s\n", glGetString(GL_RENDERER));
	printf("OpenGLʵ�ֵİ汾�ţ�%s\n",glGetString(GL_VERSION) );
	printf("OGLU���߿�汾��%s\n", gluGetString(GLU_VERSION));
}

int main(int argc, char** argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(300,300);
	glutInitWindowPosition(100,100);
	glutCreateWindow("OpenGL Version");
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
#endif