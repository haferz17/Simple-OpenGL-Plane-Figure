#include <windows.h>

#include <GL/glut.h>
#include <stdlib.h>

void userdraw(void){
    glColor3f(0,1,1);
    glBegin(GL_QUADS);
        glVertex2f(0,0.6);
        glVertex2f(-0.6,0);
        glVertex2f(-0.6,-0.6);
        glVertex2f(0,0);
    glEnd();
    glColor3f(1,1,0);
    glBegin(GL_QUADS);
        glVertex2f(0,0.6);
        glVertex2f(0,0);
        glVertex2f(0.6,-0.6);
        glVertex2f(0.6,0);
    glEnd();
    glColor3f(1,0,0);
    glBegin(GL_QUADS);
        glVertex2f(0,0);
        glVertex2f(-0.6,-0.6);
        glVertex2f(0,-1.2);
        glVertex2f(0.6,-0.6);
    glEnd();
    glColor3f(1,1,0);
    glBegin(GL_QUADS);
        glVertex2f(-0.6,0);
        glVertex2f(-0.6,-0.6);
        glVertex2f(0,-1.2);
        glVertex2f(0,-0.6);
    glEnd();
    glColor3f(0,1,1);
    glBegin(GL_QUADS);
        glVertex2f(0,-1.2);
        glVertex2f(0,-0.6);
        glVertex2f(0.6,0);
        glVertex2f(0.6,-0.6);
    glEnd();
    glColor4f(1,1,1,0.7);
    glBegin(GL_QUADS);
        glVertex2f(0,0.7);
        glVertex2f(-0.7,0);
        glVertex2f(0,-0.7);
        glVertex2f(0.7,0);
    glEnd();
}
void display(void){
    glClear(GL_COLOR_BUFFER_BIT);
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glClearColor(0, 0, 0, 0);
    userdraw();
    glutSwapBuffers();
}
int main(int argc, char** argv){
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
    glutInitWindowPosition(300,150);
    glutInitWindowSize(700,480);
    glutCreateWindow("M Aftar Roziq");
    gluOrtho2D(-1.1,1.1,-1.5,1.1);
    glutIdleFunc(display);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
