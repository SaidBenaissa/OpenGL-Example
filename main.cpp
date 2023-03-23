//#define GL_SILENCE_DEPRECATION
#include <OpenGL/gl.h>
#include <GL/glut.h>


void display() {
    // CLear the screen
    glClear(GL_COLOR_BUFFER_BIT);
    // Draw a triangle
    glBegin(GL_TRIANGLES);
    // Specify the color of each vertex
    glColor3f(1.0, 0.0, 0.0);
    // Specify the position of each vertex
    glVertex2f(0.0, 1.0);
    glColor3f(0.0, 1.0, 0.0);
    glVertex2f(-1.0, -1.0);
    glColor3f(0.0, 0.0, 1.0);
    glVertex2f(1.0, -1.0);
    glEnd();
    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("OpenGL Example");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
