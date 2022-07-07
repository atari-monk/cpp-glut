#include "glutapp.h"

void GlutApp::setup(int argc, char *argv[])
{
	model->Setup();
	SetupWindow(argc, argv);
}

void GlutApp::setup()
{
	model->menu->addMenu();
	model->display->setup();
	model->data->setup();
}

void GlutApp::run()
{
	glutMainLoop();
}

void GlutApp::clean()
{
	model->Clean();
}

void GlutApp::SetupWindow(int argc, char *argv[])
{
	glutInit(&argc, argv);
	glutInitWindowSize(1920, 1080);
	glutInitWindowPosition(0, 0);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
	glutCreateWindow("kinematics");
}
