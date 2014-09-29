#include "stdafx.h"
#define ENABLE 0
#if ENABLE
#include <stdio.h>

void display(void)
{
	printf("OpenGL实现厂商的名字：%s\n", glGetString(GL_VENDOR));
	printf("渲染器标识符：%s\n", glGetString(GL_RENDERER));
	printf("OpenGL实现的版本号：%s\n",glGetString(GL_VERSION) );
	printf("OGLU工具库版本：%s\n", gluGetString(GLU_VERSION));
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