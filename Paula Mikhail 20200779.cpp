#include <glut.h>
#include <math.h>

void display() {
    glClearColor(1, 1, 1, 1);
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(0.5);

    //chiminey
    glBegin(GL_QUADS);
    glColor3f(0.71f, 0.0f, 0.0f);
    glVertex2f(-0.7f, 0.5f);
    glVertex2f(-0.5f, 0.5f);
    glVertex2f(-0.5f, 0.09f);
    glVertex2f(-0.7f, 0.09f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.71f, 0.0f, 0.0f);
    glVertex2f(-0.9f, 0.06f);
    glVertex2f(0.9f, 0.06f);
    glVertex2f(0.0f, 0.70f);
    glEnd();

    
    glBegin(GL_QUADS);
    glColor3f(0.0f, 1.0f, 1.0f);
    glVertex2f(-0.9f, 0.06f);
    glVertex2f(0.9f, 0.06f);
    glVertex2f(0.9f, -0.85f);
    glVertex2f(-0.9f, -0.85f);
    glEnd();

    
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.76f, 0.79f);
    glVertex2f(-0.20f, -0.25f);
    glVertex2f(0.20f, -0.25f);
    glVertex2f(0.20f, -0.85f);
    glVertex2f(-0.20f, -0.85f);
    glEnd();

    
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.2f);
    glVertex2f(-0.70f, -0.55f);
    glVertex2f(-0.40f, -0.55f);
    glVertex2f(-0.40f, -0.25f);
    glVertex2f(-0.70f, -0.25f);
    glEnd();

    
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.2f);
    glVertex2f(0.40f, -0.55f);
    glVertex2f(0.70f, -0.55f);
    glVertex2f(0.70f, -0.25f);
    glVertex2f(0.40f, -0.25f);
    glEnd();

    
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.9f, 0.0f);
    glVertex2f(0.65f, -0.85f);
    glVertex2f(-0.65f, -0.85f);
    glVertex2f(-0.68f, -0.90f);
    glVertex2f(0.68f, -0.90f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.99f, 1.0f, 0.07f);
    glVertex2f(0.9f, -0.85f);
    glVertex2f(-0.9f, -0.85f);
    glVertex2f(-0.9f, -0.90f);
    glVertex2f(0.9f, -0.90f);
    glEnd();

    

    //window shutter
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.76f, 0.79f);
    glVertex2f(0.70f, -0.55);
    glVertex2f(0.80f, -0.55);
    glVertex2f(0.80f, -0.25);
    glVertex2f(0.70, -0.25);
    glEnd();

    //window shutter
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.76f, 0.79f);
    glVertex2f(0.40f, -0.55);
    glVertex2f(0.30f, -0.55);
    glVertex2f(0.30f, -0.25);
    glVertex2f(0.40, -0.25);
    glEnd();

    //window shutter
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.76f, 0.79f);
    glVertex2f(-0.70f, -0.55f);
    glVertex2f(-0.80f, -0.55f);
    glVertex2f(-0.80f, -0.25f);
    glVertex2f(-0.70f, -0.25f);
    glEnd();

    //window shutter
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.76f, 0.79f);
    glVertex2f(-0.40f, -0.55f);
    glVertex2f(-0.30f, -0.55f);
    glVertex2f(-0.30f, -0.25f);
    glVertex2f(-0.40f, -0.25f);
    glEnd();

    //line window
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.55f, -0.55f);
    glVertex2f(-0.55f, -0.25f);
    glEnd();

    //line window
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.70f, -0.40f);
    glVertex2f(-0.40f, -0.40f);
    glEnd();

    //line window
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.70f, -0.40f);
    glVertex2f(0.40f, -0.40f);
    glEnd();

    //line window
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.55f, -0.55f);
    glVertex2f(0.55f, -0.25f);
    glEnd();

    glFlush();
}


int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("OpenGL");
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(420, 420);
    glutDisplayFunc(display);
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glutMainLoop();

    return 0;
}