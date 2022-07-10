#include <stdio.h>
#include <math.h>
#include <random>
#include <OpenGL/gl.h>
#include <OpenGL/glu.h>
#include <GLUT/glut.h>

#include <string>
#include <iostream>

int bally=250;
int x1=20;
int x2;
int x3;
int prev=0;
bool chosen1=false;
bool chosen2=false;
bool chosen3=false;
int Gameover=0;
//20
void Key(unsigned char key, int x, int y) {
if (key == ' ') {
bally = bally + 20;
}
    glutPostRedisplay();
}

void drawCircle(int x, int y, float r) {
glPushMatrix();
glTranslatef(x, y, 0);
GLUquadric* quadObj = gluNewQuadric();
gluDisk(quadObj, 0, r, 50, 50);
glPopMatrix();
}
void drawRect(int x, int y, int w, int h) {
  glBegin(GL_POLYGON);
  glVertex2f(x, y);
  glVertex2f(x + w, y);
  glVertex2f(x + w, y + h);
  glVertex2f(x, y + h);
  glEnd();
}

void set1()
{
glClear(GL_COLOR_BUFFER_BIT);

//glBegin(GL_QUADS); // GL_QUAD_STRIP

/* bottom large rectangles*/
//glColor3f(0.1f, 0.0f, 0.1f);
//glVertex3f(10.0f, 0.0f, 0.0f);
//glVertex3f(15.0f, 100.0f, 0.0f);
//glVertex3f(55.0f, 100.0f, 0.0f);
//glVertex3f(55.0f, 0.0f, 0.0f);
  

    glColor3f(1.0f, 0.5f, 0.0f);
    drawRect(x1, 0.0, 20.0, 10.0);
     // GL_QUAD_STRIP
  
    glColor3f(1.0f, 0.5f, 0.0f);
        drawRect(x1+50.0, 0.0, 20.0, 50.0);
    glColor3f(1.0f, 0.5f, 0.0f);
        drawRect(x1+100.0, 0.0, 20.0, 20.0);
    glColor3f(1.0f, 0.5f, 0.0f);
        drawRect(x1+150.0, 0.0, 20.0, 40.0);
    glColor3f(x1+200.0, 0.5f, 0.0f);
        drawRect(x1+200.0, 0.0, 20.0,  30.0);
    glColor3f(1.0f, 0.5f, 0.0f);
        drawRect(x1+250.0, 0.0, 20.0, 30.0);

//////////------
   
    ///////////
/*bottom small rectangles*/
    int xs1=x1-5;
    
//glVertex3f(10.0f, 100.0f, 0.0f);
//glVertex3f(10.0f, 110.0f, 0.0f);
//glVertex3f(60.0f, 110.0f, 0.0f);
//glVertex3f(60.0f, 100.0f, 0.0f);
    glColor3f(1.0f, 0.5f, 0.0f);
    drawRect(xs1, 10.0, 30.0, 10.0);
    glColor3f(1.0f, 0.5f, 0.0f);
        drawRect(xs1+50.0, 50.0, 30.0, 10.0);
    glColor3f(1.0f, 0.5f, 0.0f);
        drawRect(xs1+100.0, 20.0, 30.0, 10.0);
    glColor3f(1.0f, 0.5f, 0.0f);
        drawRect(xs1+150.0, 40.0, 30.0, 10.0);
    glColor3f(1.0f, 0.5f, 0.0f);
        drawRect(xs1+200.0, 30.0, 30.0, 10.0);
    glColor3f(1.0f, 0.5f, 0.0f);
        drawRect(xs1+250.0, 30.0, 30.0, 10.0);
    
//    glBegin(GL_QUADS);
///*small upper rectangle*/
    ///
    ///
//glColor3f(0.1f, 0.0f, 0.1f);
//glVertex3f(95.0f, 0.0f, 0.0f);
//glVertex3f(95.0f, 120.0f, 0.0f);
//glVertex3f(135.0f, 120.0f, 0.0f);
//glVertex3f(135.0f, 0.0f, 0.0f);
//
    glColor3f(1.0f, 0.5f, 0.0f);
    drawRect(xs1, 90.0, 30.0, 10.0);
    glColor3f(1.0f, 0.5f, 0.0f);
    drawRect(xs1+50.0,100.0, 30.0, 10.0);
   glColor3f(1.0f, 0.5f, 0.0f);
    drawRect(xs1+100.0, 80.0, 30.0, 10.0);
    
    glColor3f(1.0f, 0.5f, 0.0f);
    drawRect(xs1+150.0, 110.0, 30.0, 10.0);
//    glColor3f(1.0f, 0.5f, 0.0f);
       drawRect(xs1+200.0, 130.0, 30.0, 10.0);
   glColor3f(1.0f, 0.5f, 0.0f);
       drawRect(xs1+250.0, 105.0, 30.0, 10.0);
///*upper big rectangles*/
//
    glColor3f(1.0f, 0.5f, 0.0f);
    drawRect(x1, 100.0, 20.0, 400.0);
    glColor3f(1.0f, 0.5f, 0.0f);
    drawRect(x1+50.0,110.0, 20.0, 390.0);
   glColor3f(1.0f, 0.5f, 0.0f);
    drawRect(x1+100.0, 90.0, 20.0, 410.0);
    
    glColor3f(1.0f, 0.5f, 0.0f);
    drawRect(x1+150.0, 110.0, 20.0, 340.0);
//    glColor3f(1.0f, 0.5f, 0.0f);
       drawRect(x1+200.0, 130.0, 20.0, 370.0);
   glColor3f(1.0f, 0.5f, 0.0f);
       drawRect(x1+250.0, 105.0, 20.0, 395.0);

glColor3f(1.0f, 0.0f, 0.0f);
drawCircle(20, bally, 10);
   prev=x1+250;
glFlush();


}



void Anim() {

bally -= 0.01;
glutPostRedisplay();
    x1-=1;
    x2-=1;
    x3-=1;
}








void set2()
{
    glClear(GL_COLOR_BUFFER_BIT);

    //glBegin(GL_QUADS); // GL_QUAD_STRIP

    /* bottom large rectangles*/
    //glColor3f(0.1f, 0.0f, 0.1f);
    //glVertex3f(10.0f, 0.0f, 0.0f);
    //glVertex3f(15.0f, 100.0f, 0.0f);
    //glVertex3f(55.0f, 100.0f, 0.0f);
    //glVertex3f(55.0f, 0.0f, 0.0f);
        glColor3f(1.0f, 0.5f, 0.0f);
        drawRect(x2, 0.0, 20.0, 50.0);
         // GL_QUAD_STRIP
        glColor3f(1.0f, 0.5f, 0.0f);
            drawRect(x2+50.0, 0.0, 20.0, 10.0);
        glColor3f(1.0f, 0.5f, 0.0f);
            drawRect(x2+100.0, 0.0, 20.0, 40.0);
        glColor3f(1.0f, 0.5f, 0.0f);
            drawRect(x2+150.0, 0.0, 20.0, 50.0);
        glColor3f(x2+200.0, 0.5f, 0.0f);
            drawRect(x2+200, 0.0, 20.0,  90.0);
        glColor3f(1.0f, 0.5f, 0.0f);
            drawRect(x2+250.0, 0.0, 20.0, 30.0);
    //////////------
       
        ///////////
    /*bottom small rectangles*/
        int xs2=x2-5;
        
    //glVertex3f(10.0f, 100.0f, 0.0f);
    //glVertex3f(10.0f, 110.0f, 0.0f);
    //glVertex3f(60.0f, 110.0f, 0.0f);
    //glVertex3f(60.0f, 100.0f, 0.0f);
        glColor3f(1.0f, 0.5f, 0.0f);
        drawRect(xs2, 50.0, 30.0, 10.0);
        glColor3f(1.0f, 0.5f, 0.0f);
            drawRect(xs2+50.0, 10.0, 30.0, 10.0);
        glColor3f(1.0f, 0.5f, 0.0f);
            drawRect(xs2+100.0, 40.0, 30.0, 10.0);
        glColor3f(1.0f, 0.5f, 0.0f);
            drawRect(xs2+150.0, 50.0, 30.0, 10.0);
        glColor3f(1.0f, 0.5f, 0.0f);
            drawRect(xs2+200.0, 90.0, 30.0, 10.0);
        glColor3f(1.0f, 0.5f, 0.0f);
            drawRect(xs2+250.0, 30.0, 30.0, 10.0);
        
    //    glBegin(GL_QUADS);
    ///*small upper rectangle*/
        ///
        ///
    //glColor3f(0.1f, 0.0f, 0.1f);
    //glVertex3f(95.0f, 0.0f, 0.0f);
    //glVertex3f(95.0f, 120.0f, 0.0f);
    //glVertex3f(135.0f, 120.0f, 0.0f);
    //glVertex3f(135.0f, 0.0f, 0.0f);
    //
        glColor3f(1.0f, 0.5f, 0.0f);
        drawRect(xs2, 90.0, 30.0, 10.0);
        glColor3f(1.0f, 0.5f, 0.0f);
        drawRect(xs2+50.0,100.0, 30.0, 10.0);
       glColor3f(1.0f, 0.5f, 0.0f);
        drawRect(xs2+100.0, 80.0, 30.0, 10.0);
        
        glColor3f(1.0f, 0.5f, 0.0f);
        drawRect(xs2+150.0, 110.0, 30.0, 10.0);
    //    glColor3f(1.0f, 0.5f, 0.0f);
           drawRect(xs2+200.0, 130.0, 30.0, 10.0);
       glColor3f(1.0f, 0.5f, 0.0f);
           drawRect(xs2+250.0, 105.0, 30.0, 10.0);
    ///*upper big rectangles*/
    //
        glColor3f(1.0f, 0.5f, 0.0f);
        drawRect(x2, 100.0, 20.0, 400.0);
        glColor3f(1.0f, 0.5f, 0.0f);
        drawRect(x2+50.0,110.0, 20.0, 390.0);
       glColor3f(1.0f, 0.5f, 0.0f);
        drawRect(x2+100.0, 90.0, 20.0, 410.0);
        
        glColor3f(1.0f, 0.5f, 0.0f);
        drawRect(x2+150.0, 110.0, 20.0, 340.0);
    //    glColor3f(1.0f, 0.5f, 0.0f);
           drawRect(x2+200.0, 130.0, 20.0, 370.0);
       glColor3f(1.0f, 0.5f, 0.0f);
           drawRect(x2+250.0, 105.0, 20.0, 395.0);

    glColor3f(1.0f, 0.0f, 0.0f);
    //drawCircle(20, bally, 10);
    prev=x2+250;
    glFlush();


    }


    

void set3()
{

    glClear(GL_COLOR_BUFFER_BIT);

    //glBegin(GL_QUADS); // GL_QUAD_STRIP

    /* bottom large rectangles*/
    //glColor3f(0.1f, 0.0f, 0.1f);
    //glVertex3f(10.0f, 0.0f, 0.0f);
    //glVertex3f(15.0f, 100.0f, 0.0f);
    //glVertex3f(55.0f, 100.0f, 0.0f);
    //glVertex3f(55.0f, 0.0f, 0.0f);
        glColor3f(1.0f, 0.5f, 0.0f);
        drawRect(x3, 0.0, 20.0, 50.0);
         // GL_QUAD_STRIP
        glColor3f(1.0f, 0.5f, 0.0f);
            drawRect(x3+50.0, 0.0, 20.0, 100.0);
        glColor3f(1.0f, 0.5f, 0.0f);
            drawRect(x3+100.0, 0.0, 20.0, 150.0);
        glColor3f(1.0f, 0.5f, 0.0f);
            drawRect(x3+150.0, 0.0, 20.0, 150.0);
        glColor3f(1.0, 0.5f, 0.0f);
            drawRect(x3+200, 0.0, 20.0,  90.0);
        glColor3f(1.0f, 0.5f, 0.0f);
            drawRect(x3+250.0, 0.0, 20.0, 130.0);
    //////////------
       
        ///////////
    /*bottom small rectangles*/
        int xs3=x3-5;
        
    //glVertex3f(10.0f, 100.0f, 0.0f);
    //glVertex3f(10.0f, 110.0f, 0.0f);
    //glVertex3f(60.0f, 110.0f, 0.0f);
    //glVertex3f(60.0f, 100.0f, 0.0f);
        glColor3f(1.0f, 0.5f, 0.0f);
        drawRect(xs3, 50.0, 30.0, 10.0);
        glColor3f(1.0f, 0.5f, 0.0f);
            drawRect(xs3+50.0, 100.0, 30.0, 10.0);
        glColor3f(1.0f, 0.5f, 0.0f);
            drawRect(xs3+100.0, 150.0, 30.0, 10.0);
        glColor3f(1.0f, 0.5f, 0.0f);
            drawRect(xs3+150.0, 150.0, 30.0, 10.0);
        glColor3f(1.0f, 0.5f, 0.0f);
            drawRect(xs3+200.0, 90.0, 30.0, 10.0);
        glColor3f(1.0f, 0.5f, 0.0f);
            drawRect(xs3+250.0, 130.0, 30.0, 10.0);
        
    //    glBegin(GL_QUADS);
    ///*small upper rectangle*/
        ///
        ///
    //glColor3f(0.1f, 0.0f, 0.1f);
    //glVertex3f(95.0f, 0.0f, 0.0f);
    //glVertex3f(95.0f, 120.0f, 0.0f);
    //glVertex3f(135.0f, 120.0f, 0.0f);
    //glVertex3f(135.0f, 0.0f, 0.0f);
    //
        glColor3f(1.0f, 0.5f, 0.0f);
        drawRect(xs3, 210.0, 30.0, 10.0);
        glColor3f(1.0f, 0.5f, 0.0f);
        drawRect(xs3+50.0,200.0, 30.0, 10.0);
       glColor3f(1.0f, 0.5f, 0.0f);
        drawRect(xs3+100.0, 240.0, 30.0, 10.0);
        
        glColor3f(1.0f, 0.5f, 0.0f);
        drawRect(xs3+150.0, 190.0, 30.0, 10.0);
    //    glColor3f(1.0f, 0.5f, 0.0f);
           drawRect(xs3+200.0, 205.0, 30.0, 10.0);
       glColor3f(1.0f, 0.5f, 0.0f);
           drawRect(xs3+250.0, 205.0, 30.0, 10.0);
    ///*upper big rectangles*/
    //
        glColor3f(1.0f, 0.5f, 0.0f);
        drawRect(x3, 210.0, 20.0, 500-210.0);
        glColor3f(1.0f, 0.5f, 0.0f);
        drawRect(x3+50.0,200.0, 20.0, 300.0);
       glColor3f(1.0f, 0.5f, 0.0f);
        drawRect(x3+100.0, 240.0, 20.0, 500-240.0);
        
        glColor3f(1.0f, 0.5f, 0.0f);
        drawRect(x3+150.0, 190.0, 20.0, 500-190.0);
    //    glColor3f(1.0f, 0.5f, 0.0f);
           drawRect(x3+200.0, 205.0, 20.0, 500-205.0);
       glColor3f(1.0f, 0.5f, 0.0f);
           drawRect(x3+250.0, 205.0, 20.0, 500-205.0);

    glColor3f(1.0f, 0.0f, 0.0f);
   // drawCircle(20, bally, 10);
    prev=x3+250;
    glFlush();


    }


void Display() {
  
glClear(GL_COLOR_BUFFER_BIT);
//    if(x1==0||x2==0||x3==0){
//        int  i = (rand()%3)+1;
//       ;}
    drawCircle(20, bally, 10);
glPushMatrix();

    set1();
    
glFlush();
}

int main(int argc, char** argr) {
glutInit(&argc, argr);
   
  
glutInitWindowSize(400, 400);
glutInitWindowPosition(150, 150);

glutCreateWindow("OpenGL - 2D Template");
glutDisplayFunc(Display);
glutIdleFunc(Anim);
//glutDisplayFunc(set1);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
gluOrtho2D(0.0, 300, 0.0, 300);
    glutKeyboardUpFunc(Key);
glutMainLoop();
    return 0;
}

