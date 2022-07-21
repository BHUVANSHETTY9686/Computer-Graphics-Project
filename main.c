#include <stdio.h>
#include <GL/glut.h>
float   x,y,d1,d2,d3;
float t1=10,t2=800,flag=0;
int r=0,d=0,s=0,in=0;
int dlg = 0,dia=0;
void timer43(int a);
void timer42(int a);
void timer41(int a);
void dialogue(int e);
void declare(char *string)
{
     while(*string)
        glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN, *string++);
}
void declare6(char *string)
{
    while(*string)
		
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *string++);

	
}
void title4()
{
	       
		
			glColor3f(1.0,1.0,1.0);
			glBegin(GL_POLYGON);
			glVertex2i(190,530);
			glVertex2i(810,530);
			glVertex2i(810,400);
			glVertex2i(190,400);
			glEnd();
		
			glColor3f(0.3,0.0,0.4);
			glPushMatrix();
			glTranslatef(200.0,500.0,0.0);
		    glScalef(0.150,0.150,0.0);
		    declare("THE WATER CAME UP TO THE TOP.");
		    glPopMatrix();	 
		
		    glColor3f(0.3,0.0,0.4);
		    glPushMatrix();
		    glTranslatef(195.0,450.0,0.0);
		    glScalef(0.150,0.150,0.0);
		    declare(" CROW DRANK WATER AND FLEW AWAY HAPPILY");
		    glPopMatrix();	
		    
			glFlush();
	        glutSwapBuffers();
}
void title6()
{
	 glColor3f(0.0,0.0,0.8);
			glPushMatrix();
			glTranslatef(50.0,950.0,0.0);
			glScalef(0.175,0.175,0.0);
			declare("MANGALORE INSTITUTE OF TECHNOLOGY AND ENGINEERING");
			glPopMatrix();
		
			glColor3f(0.1,0.2,0.9);
			glPushMatrix();
			glTranslatef(100.0,850.0,0.0);
			glScalef(0.175,0.175,0.0);
			declare("DEPARTMENT OF COMPUTER SCIENCE AND ENGINEERING");
			glPopMatrix();
		
			glColor3f(0.2,0.1,0.3);
			glPushMatrix();
			glTranslatef(180.0,750.0,0.0);
			glScalef(0.175,0.175,0.0);
			declare("DEMONSTRATION OF THIRSTY CROW STORY ");
			glPopMatrix();
		
			glColor3f(0.2,0.1,0.3);
			glPushMatrix();
			glTranslatef(310.0,700.0,0.0);
			glScalef(0.175,0.175,0.0);
			declare("USING COMPUTER GRAPHICS");
			glPopMatrix();
		
			glColor3f(1.0,1.0,1.0);
			glBegin(GL_POLYGON);
			glVertex2i(190,650);
			glVertex2i(810,650);
			glVertex2i(810,330);
			glVertex2i(190,330);
			glEnd();
		
			glColor3f(0.3,0.0,0.4);
			glPushMatrix();
			glTranslatef(350.0,600.0,0.0);
			glScalef(0.150,0.150,0.0);
			declare("MORAL OF THE STORY");
			glPopMatrix();
		
		    glColor3f(0.3,0.0,0.4);
		    glPushMatrix();
		    glTranslatef(220.0,500.0,0.0);
		    glScalef(0.150,0.150,0.0);
		    declare("WHERE THERE IS A WILL,THERE IS A WAY");
		    glPopMatrix();	
		
		    glColor3f(0.4,0.0,0.8);
		    glPushMatrix();
		    glTranslatef(400.0,250.0,0.0);
			glScalef(0.175,0.175,0.0);
			declare("THANK YOU");
			glPopMatrix();
			glFlush();
	        glutSwapBuffers();
}
void title( )
{
	  if(in==4)
      {
    	    glColor3f(0.4,0.0,0.8);
		    glPushMatrix();
		    glTranslatef(250.0,350.0,0.0);
			glScalef(0.150,0.150,0.0);
			declare("press a|A");
			glPopMatrix();
			
    
      }
      else 
      {
      	    glColor3f(0.0,0.0,0.8);
			glPushMatrix();
			glTranslatef(50.0,950.0,0.0);
			glScalef(0.175,0.175,0.0);
			declare("MANGALORE INSTITUTE OF TECHNOLOGY AND ENGINEERING");
			glPopMatrix();
		
			glColor3f(0.1,0.2,0.9);
			glPushMatrix();
			glTranslatef(100.0,850.0,0.0);
			glScalef(0.175,0.175,0.0);
			declare("DEPARTMENT OF COMPUTER SCIENCE AND ENGINEERING");
			glPopMatrix();
		
			glColor3f(0.2,0.1,0.3);
			glPushMatrix();
			glTranslatef(180.0,750.0,0.0);
			glScalef(0.175,0.175,0.0);
			declare("DEMONSTRATION OF THIRSTY CROW STORY ");
			glPopMatrix();
		
			glColor3f(0.2,0.1,0.3);
			glPushMatrix();
			glTranslatef(310.0,700.0,0.0);
			glScalef(0.175,0.175,0.0);
			declare("USING COMPUTER GRAPHICS");
			glPopMatrix();
		
			glColor3f(1.0,1.0,1.0);
			glBegin(GL_POLYGON);
			glVertex2i(190,650);
			glVertex2i(810,650);
			glVertex2i(810,330);
			glVertex2i(190,330);
			glEnd();
		
			glColor3f(0.3,0.0,0.4);
			glPushMatrix();
			glTranslatef(450.0,600.0,0.0);
			glScalef(0.150,0.150,0.0);
			declare("PROJECT BY");
			glPopMatrix();
		
			glColor3f(0.3,0.0,0.4);
			glPushMatrix();
			glTranslatef(300.0,500.0,0.0);
		    glScalef(0.150,0.150,0.0);
		    declare("BHUVAN SHETTY-4MT19CS038");
		    glPopMatrix();	 
		
		    glColor3f(0.3,0.0,0.4);
		    glPushMatrix();
		    glTranslatef(300.0,450.0,0.0);
		    glScalef(0.150,0.150,0.0);
		    declare("DEEKSHA SHETTY-4MT19CS044");
		    glPopMatrix();	
		
		    glColor3f(0.4,0.0,0.8);
		    glPushMatrix();
		    glTranslatef(250.0,350.0,0.0);
			glScalef(0.150,0.150,0.0);
			declare("GUIDED BY-MRS.JEEVITHA SAMPATH");
			glPopMatrix();
		    
		    glColor3f(0.4,0.0,0.8);
		    glPushMatrix();
		    glTranslatef(200.0,250.0,0.0);
			glScalef(0.175,0.175,0.0);
			declare("Press 1,2,3,4,5 to continue the story");
			glPopMatrix();
	      	
	  }
 	glFlush();
	glutSwapBuffers();
}
void dialogue(int e)
{
	            int i;
	            dia=4;
	 	      	if(dia==4)
	        	{
			
					glPushMatrix();
					glTranslatef(330.0,-180.0,0.0);
					glScalef(0.8,0.8,0.0);
					title4();
   	        		glPopMatrix();
   	        		for(i=0;i<999999999;i++)
   	        		dia=0;
		       }
		        glutTimerFunc(200,timer43,0);
	
}
void timer43(int a)
{
	    
	    s=0;
		r=0;
		t1+=1.6;
	    t2+=2;
		glutPostRedisplay();
		glutTimerFunc(100,timer43,0);
	
}
void timer42(int a)
{

	if(t2<140)
	{
		s=1;
		r=0;
		t1+=1.6;
	    t2+=2;
		glutPostRedisplay();
		glutTimerFunc(100,timer42,0);
	}
	else
	{
	 	s=0;
	 	in++;
	 	if(in==4)
	 	{
	 	        glutTimerFunc(2000,dialogue,0);
	 		
		}
	    else
	    {
	    		glutPostRedisplay();
		        glutTimerFunc(2000,timer41,0);
		}
	
	}
}
void timer41(int a)
{
	if(t2>30)
	{
		r=1;
		t1-=1.6;
	    t2-=2;
		glutPostRedisplay();
		glutTimerFunc(100,timer41,0);
	}
	else
	{
		glutPostRedisplay();
		glutTimerFunc(2000,timer42,0);
	}
}
void timer4(int e)
{
	if(t2>140)
	{
	   t1+=2.4;
	   t2-=4;

		glutPostRedisplay();
		glutTimerFunc(100,timer4,0);
	}
	else
	{
		glutPostRedisplay();
		glutTimerFunc(2000,timer41,0);
	}
}
void timer3(int e)
{
	d3=d3+20;
	glutPostRedisplay();
    glutTimerFunc(130,timer3,0);
}

void timer2(int e)
{
	d2=d2+20;
	glutPostRedisplay();
    glutTimerFunc(200,timer2,0);
}
void timer1(int e)
{
	if(d1==1000)
		d1=0;
	
	d1=d1+50;
	glutPostRedisplay();
    glutTimerFunc(500,timer1,0);
}


void ground()
{
	glBegin(GL_POLYGON);
		glColor3f(0.0,1.0,0.0);
		glVertex2i(0,0);
		glVertex2i(0,650);
		glVertex2i(1000,650);
		glVertex2i(1000,0);
	glEnd();		
}
void cloud(float x, float y)
{
	glColor3f(1.0,1.0,1.0);	
	glPushMatrix();
	glTranslatef(x,y,0);
	glutSolidSphere(40,100,100);
	glPopMatrix();	
	glPushMatrix();
	glTranslatef(x-50,y,0);
	glutSolidSphere(40,100,100);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(x+50,y+10,0);
	glutSolidSphere(40,100,100);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(x-10,y+40,0);
	glutSolidSphere(50,100,100);
	glPopMatrix();
}
void sun()
{
	glColor3f(1.0,0.694117647,0.0);
	glPushMatrix();
	glTranslatef(90,930,0);
	glutSolidSphere(40,120,120);
	glPopMatrix();
}
void mountain()
 {
 	glBegin(GL_POLYGON); //moun5
	glColor3f(0.0,1.0,0.0);
	glVertex2i(920.0,650.0);
	glColor3f(0.733333333,0.37647058823,0.101960784313);
	glVertex2i(1000.0,650.0);
	glColor3f(0.0,1.0,0.0);
	glVertex2i(970.0,760.0);
	glEnd();
	 
 	glBegin(GL_POLYGON); //moun4
	glColor3f(0.0,1.0,0.0);
	glVertex2i(710.0,650.0);
	glColor3f(0.733333333,0.37647058823,0.101960784313);
	glVertex2i(920.0,650.0);
	glColor3f(0.0,1.0,0.0);
	glVertex2i(825.0,760.0);
	glEnd(); 
 	
 	glBegin(GL_POLYGON); //moun4
	glColor3f(0.0,1.0,0.0);
	glVertex2i(500.0,650.0);
	glColor3f(0.733333333,0.37647058823,0.101960784313);
	glVertex2i(710.0,650.0);
	glColor3f(0.0,1.0,0.0);
	glVertex2i(615.0,760.0);
	glEnd(); 
 	
	glBegin(GL_POLYGON); //moun3
	glColor3f(0.0,1.0,0.0);
	glVertex2i(290.0,650.0);
	glColor3f(0.733333333,0.37647058823,0.101960784313);
	glVertex2i(500.0,650.0);
	glColor3f(0.0,1.0,0.0);
	glVertex2i(405.0,760.0);
	glEnd(); 
	
	glBegin(GL_POLYGON);//moun2
	glColor3f(0.733333333,0.37647058823,0.101960784313);
	glVertex2i(150,650.0);
	glColor3f(0.0,1.0,0.0);
	glVertex2i(330.0,650.0);
	glColor3f(0.6470588,0.564705882352,0.2901960784);
	glVertex2i(230.0,760.0);
	glEnd();
	
	glBegin(GL_POLYGON); //moun1
	glColor3f(0.733333333,0.37647058823,0.101960784313);
	glVertex2i(0.0,650.0);
	glColor3f(0.0,1.0,0.0);
	glVertex2i(190.0,650.0);
	glColor3f(0.6470588,0.564705882352,0.2901960784);
	glVertex2i(95.0,760.0);
	glEnd();
}
void streetlight()
{
	int i;
	glColor3f(0.0,0.0,0.0);
	for(i=150;i<=900;i=i+150)
	{
		    glLineWidth(10.0);
         	glBegin(GL_LINES); //stlight
		 	glVertex2i(i,780.0);
			glVertex2i(i,630.0);
			glEnd();
			glLineWidth(7.0);
			glBegin(GL_LINES);//for drawing pole
			glVertex2i(i-10,780.0);
	        glVertex2i(i+10,780.0);
	        glEnd();
          	glPointSize(7.0);
        	glBegin(GL_POINTS);
        	glVertex2i(i-8,776.0);
	        glVertex2i(i+2,776.0);
	        glEnd();
	}
	glLineWidth(1.0);//for drawing lines
	glBegin(GL_LINES);
	glVertex2i(0.0,780.0);
	glVertex2i(1000.0,780.0);
	glEnd();
}
void tree()
{
	glBegin(GL_POLYGON);
    glColor3f(1.0,0.4980392157,0.1529411765);  //stem
	glVertex2i(303.0,180.0);
	glVertex2i(318.0,180.0);
	glVertex2i(318.0,220.0);
	glVertex2i(303.0,220.0);
	glEnd();

	glColor3f(0.5490196,0.941176,0.074509); //tree
    glPushMatrix();
    glTranslatef(277,275,0);
    glutSolidSphere(28,50,50);
    glPopMatrix();

	glColor3f(0.5490196,0.941176,0.074509); //tree
    glPushMatrix();
    glTranslatef(267,260,0);
    glutSolidSphere(30,50,50);
    glPopMatrix();
   
    glColor3f(0.5490196,0.941176,0.074509); //tree
    glPushMatrix();
    glTranslatef(287,256,0);
    glutSolidSphere(30,50,50);
    glPopMatrix();

  	glBegin(GL_POLYGON);
	glColor3f(0.270588235,0.137254902,0.0);//stem
	glVertex2i(269.0,197.0);
	glVertex2i(285.0,197.0);
	glVertex2i(285.0,240.0);
	glVertex2i(269.0,240.0);
	glEnd();

    glColor3f(0.058823529,0.184313725,0.003921569); //tree
    glPushMatrix();
    glTranslatef(301,240,0);
    glutSolidSphere(30,50,50);
    glPopMatrix();
   
    glColor3f(0.058823529,0.184313725,0.003921569);//tree
    glPushMatrix();
    glTranslatef(301,240,0);
    glutSolidSphere(27,50,50);
    glPopMatrix();
   
    glColor3f(0.058823529,0.184313725,0.003921569); //tree
    glPushMatrix();
    glTranslatef(320,236,0);
    glutSolidSphere(29,50,50);
    glPopMatrix();
   
    glColor3f(0.058823529,0.184313725,0.003921569); //tree
    glPushMatrix();
    glTranslatef(308,255,0);
    glutSolidSphere(28,50,50);
    glPopMatrix();
}
void tree1(int a)
{	
	glBegin(GL_POLYGON);
		glColor3f(0.1647058823529412,0.0901960784313725,0.0431372549019608);
		glVertex2f(110.0,450.0); //for drawing bark
		glVertex2f(110.0,580.0);
		glVertex2f(150.0,580.0);
		glVertex2f(150.0,450.0);
	glEnd();
	glColor3f(0.0,0.5019607843137255,0.0);
	glPushMatrix();
	glTranslatef(110,610,0);
	glutSolidSphere(50,100,100);
	glPopMatrix();	
	glPushMatrix();
	glTranslatef(150,610,0);
	glutSolidSphere(50,100,100);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(120,665,0);
	glutSolidSphere(45,100,100);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(140,665,0);
	glutSolidSphere(45,100,100);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(130,720,0);
	glutSolidSphere(40,100,100);
	glPopMatrix();
	glPointSize(3);
	if(a==1)
	{
		glBegin(GL_POINTS);
			glColor3f(1.0,1.0,0.0);
			glVertex2i(100,610);
			glVertex2i(130,610);
			glVertex2i(110,650);
			glVertex2i(140,700);
			glVertex2i(150,630);
			glVertex2i(120,690);
			glVertex2i(80,610);
			glVertex2i(170,610);
			glVertex2i(140,750);
			glVertex2i(120,720);
			glVertex2i(90,690);
			glVertex2i(160,640);
		glEnd();
	}
	else{
		glBegin(GL_POINTS);
			glColor3f(0.0,1.0,1.0);
			glVertex2i(100,610);
			glVertex2i(130,610);
			glVertex2i(110,650);
			glVertex2i(140,700);
			glVertex2i(150,630);
			glVertex2i(120,690);
			glVertex2i(80,610);
			glVertex2i(170,610);
			glVertex2i(140,750);
			glVertex2i(120,720);
			glVertex2i(90,690);
			glVertex2i(160,640);
		glEnd();
	}
}

void tree2()
{
	glBegin(GL_POLYGON);
		glColor3f(0.270588235,0.137254902,0.0);
		glVertex2f(40.0,450.0);
		glVertex2f(40.0,700.0);
		glVertex2f(80.0,700.0);
		glVertex2f(80.0,450.0);
	glEnd();
	glBegin(GL_POLYGON);
		glColor3f(0.058823529,0.184313725,0.003921569);
		glVertex2f(0.0,600.0);
		glVertex2f(120.0,600.0);
		glVertex2f(60.0,800.0);
	glEnd();
	glBegin(GL_POLYGON);
		glColor3f(0.058823529,0.184313725,0.003921569);
		glVertex2f(0.0,700.0);
		glVertex2f(120.0,700.0);
		glVertex2f(60.0,850.0);
	glEnd();
}

void window()
{
	glVertex2i(640,290);
	glVertex2i(640,330);
	glVertex2i(690,330);
	glVertex2i(690,290);	
}
void door()
{
	glVertex2i(730,250);
	glVertex2i(730,350);
	glVertex2i(770,350);
	glVertex2i(770,250);
}
void house()
{
	glBegin(GL_POLYGON);	//body
		glColor3f(0.8,0.4,0.6);
		glVertex2i(600,400);
		glVertex2i(600,250);
		glVertex2i(800,250);
		glVertex2i(800,400);
	glEnd();
	glBegin(GL_POLYGON);	//roof
		glColor3f(0.5,0.2,0.1);
		glVertex2i(550,400);
		glVertex2i(600,470);
		glVertex2i(800,470);
		glVertex2i(850,400);
	glEnd();
	glBegin(GL_POLYGON);	//door
		glColor3f(0.0,1.0,1.0);
		door();
	glEnd();
	glBegin(GL_POLYGON);	//window
		glColor3f(1.0,0.0,1.0);
		window();
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINE_LOOP);	//door
		door();
	glEnd();
	glBegin(GL_LINE_LOOP);	//window
		window();
	glEnd();
	glBegin(GL_LINES);
		x=650;
		int i;
		for(i=0;i<5;i++){
		glVertex2i(x,290);
		glVertex2i(x,330);
		x+=10;
		}
		glVertex2i(750,250);
		glVertex2i(750,350);
	glEnd();
}
void home()
{
	glBegin(GL_POLYGON);	//body
		glColor3f(1.0,0.7921568627,0.0941176471);
		glVertex2i(600,400);
		glVertex2i(600,250);
		glVertex2i(800,250);
		glVertex2i(800,400);
	glEnd();
	glBegin(GL_POLYGON);	//roof
		glColor3f(0.5,0.2,0.1);
		glVertex2i(550,400);
		glVertex2i(600,470);
		glVertex2i(800,470);
		glVertex2i(850,400);
	glEnd();
	glBegin(GL_POLYGON);	//door
		glColor3f(1.0,0.4980392157,0.1529411765); ;
		door();
	glEnd();
	glBegin(GL_POLYGON);	//window
		glColor3f(1.0,0.4980392157,0.1529411765);
		window();
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINE_LOOP);	//door
		door();
	glEnd();
	glBegin(GL_LINE_LOOP);	//window
		window();
	glEnd();
	glBegin(GL_LINES);
		x=650;
		int i;
		for(i=0;i<5;i++){
		glVertex2i(x,290);
		glVertex2i(x,330);
		x+=10;
		}
		glVertex2i(750,250);
		glVertex2i(750,350);
	glEnd();
}
void road(int i)
{
	glColor3f(0.6509803921568627,0.6352941176470588,0.007843137254902);
	glBegin(GL_POLYGON);
		glVertex2i(0,0);
		glVertex2i(0,100);
		glVertex2i(1000,100);
		glVertex2i(1000,0);
	glEnd();
	if(i==3) return;
	else
	{
		 glColor3f(0.5 , 0.2 , 0);
		 glBegin(GL_POLYGON);
		 glVertex2i(680,100);
		 glVertex2i(730,100);
		 glVertex2i(730,250);
		 glVertex2i(680,250);
     	glEnd();
	}
	
}
void gate(int i)
{
	glColor3f(1.0,1.0,1.0);   //gate
glLineWidth(6.0);
    glBegin(GL_LINES);
glVertex2i(i,373.0);
glVertex2i(i,313.0);
glEnd();
  if(i==1000)
  {
		glLineWidth(4.0);
		glBegin(GL_LINES);
		glVertex2i(0.0,343.0);
		glVertex2i(600.0,343.0);
		glVertex2i(0.0,333.0);
		glVertex2i(600.0,333.0);
		glEnd();

		glLineWidth(4.0);
		glBegin(GL_LINES);
		glVertex2i(800.0,343.0);
		glVertex2i(1000.0,343.0);
		glVertex2i(800.0,333.0);
		glVertex2i(1000.0,333.0);
		glEnd();
 }
}
void well()
{
	 int i,j;
	  glColor3f(1.0,0.4,0.3);
	 glBegin(GL_POLYGON); //rectangle
	 glVertex2i(200,200);
	 glVertex2i(400,200);
	 glVertex2i(400,400);
	 glVertex2i(200,400);
	 glEnd();
	 
	 glColor3f(1.0,1.0,1.0);
	 glPushMatrix();
	 glTranslatef(300,400,0);
	 glScalef(1.0,0.3,1.0);
	 glutSolidSphere(100,100,100);
	 glPopMatrix();
	 
	 glColor3f(0.4,0.4,0.0);//stick
	 glBegin(GL_POLYGON); 
	 glVertex2i(210,400);
	 glVertex2i(220,400);
	 glVertex2i(220,470);
	 glVertex2i(210,470);
	 glEnd();
	 
	 
	 glColor3f(0.4,0.4,0.0);//stick
	 glBegin(GL_POLYGON); 
	 glVertex2i(385,400);
	 glVertex2i(395,400);
	 glVertex2i(395,470);
	 glVertex2i(385,470);
	 glEnd();
	 
	 glColor3f(0.4,0.4,0.0);
	 glBegin(GL_POLYGON); 
	 glVertex2i(190,460);
	 glVertex2i(410,460);
	 glVertex2i(410,470);
	 glVertex2i(190,470);
	 glEnd();
	 glColor3f(1.0,0.0,0.0);
	 glLineWidth(1.0);
	 
	 for(i=200,j=250;j<=400;i=i+50,j=j+50)
	 {
	 	  if(j==400)
	 	      j=370;
	 	  glBegin(GL_LINE_LOOP); 
	      glVertex2i(200,i);
	      glVertex2i(250,i);
	      glVertex2i(250,j);
	      glVertex2i(200,j);
	      glEnd();
	 	  
	 }
	 for(i=200,j=250;j<=400;i=i+50,j=j+50)
	 {
	 	  if(j==400)
	 	      j=370;
	 	  glBegin(GL_LINE_LOOP); 
	      glVertex2i(250,i);
	      glVertex2i(300,i);
	      glVertex2i(300,j);
	      glVertex2i(250,j);
	      glEnd();
	 	  
	 }
	 for(i=200,j=250;j<=400;i=i+50,j=j+50)
	 {
	 	  if(j==400)
	 	      j=370;
	 	  glBegin(GL_LINE_LOOP); 
	      glVertex2i(300,i);
	      glVertex2i(350,i);
	      glVertex2i(350,j);
	      glVertex2i(300,j);
	      glEnd();
	 	  
	 }
	 for(i=200,j=250;j<=400;i=i+50,j=j+50)
	 {
	 	  if(j==400)
	 	      j=370;
	 	  glBegin(GL_LINE_LOOP); 
	      glVertex2i(350,i);
	      glVertex2i(400,i);
	      glVertex2i(400,j);
	      glVertex2i(350,j);
	      glEnd();
	 	  
	 } 
}
void sphere(void)
{
	 glPushMatrix();
	 glTranslatef(250,250,0);
	 glutSolidSphere(70,100,100);
	 glPopMatrix();
}
void raise() //for raising water around the neck of the pot
{
	 glBegin(GL_POLYGON); 
	 glVertex2i(225,312);
	 glVertex2i(275,312);
	 glVertex2i(275,360);
	 glVertex2i(225,360);
	 glEnd();
}
void pot()
{
	 
	 glColor3f(0.5,0.2,0.0);
	 glBegin(GL_POLYGON); 
	 glVertex2i(225,312);
	 glVertex2i(275,312);
	 glVertex2i(275,360);
	 glVertex2i(225,360);
	 glEnd();
	 glColor3f(0.5,0.2,0.0); //for drawing smaller sphere of radius 25
	 glPushMatrix();
	 glTranslatef(250,360,0);
	 glScalef(1,0.5,0.0);
	 glutSolidSphere(26,100,100);
	 glPopMatrix();
}
void stone()
{
	int i;
    glColor3f(0.4352,0.4588,0.4078); 
    for(i=190;i<=350;i=i+20)
    {
    	glPushMatrix();
    	glTranslatef(i,100,0);
    	glScalef(0.4,0.5,0.0);
    	glutSolidSphere(20,50,50);
    	glPopMatrix();
    	
	}
  
}
void crow(int d)
{
	 glColor3f(0.0,0.0,0.0); //for drwaing smaller sphere of radius 25
     glPushMatrix();
	 glTranslatef(270,270,0);
	 glutSolidSphere(25,100,100);
	 glPopMatrix();
	 glPushMatrix();
	 glTranslatef(220,220,0); //for drawing bigger sphere
	 glutSolidSphere(50,100,100);
	 glPopMatrix();
	
	 glPushMatrix();
	 glTranslatef(140,195,0);
	 glutSolidSphere(40,100,100); //for drawing  down sphere
	 glPopMatrix(); 
	  
	 glColor3f(0.0,0.0,0.0);
	 glBegin(GL_QUADS); //for drawing quads within spheres
	 glVertex2i(173,250);
	 glVertex2i(253,250);
	 glVertex2i(190,220);
	 glVertex2i(115,227);
	 glEnd();
	 
	 glColor3f(0.0,0.0,0.0);
	glPushMatrix();
	 glTranslatef(185,185,0);  //for drawing small sphere
	 glutSolidSphere(20,100,100);
	 glPopMatrix();
	 
	 glBegin(GL_POLYGON);  //for drawing tail
	 glVertex2i(115,227);
	 glVertex2i(40,105);
	 glVertex2i(115,130);
	 glEnd();
	 glColor3f(0.0,0.0,0.0); //for removing curved egde
	 glBegin(GL_POLYGON);
	 glVertex2i(253,288);
	 glVertex2i(253,240);
	 glVertex2i(173,240);
	 glEnd();
	 if(d==4)
	 {
		 glColor3f(0.0,0.0,0.0); //for drawing open mouth
		 glBegin(GL_POLYGON);
		 glVertex2i(290,284);
		 glVertex2i(345,264);
		 glVertex2i(290,260);
		 glEnd();
	}
	 glColor3f(0.0,0.0,0.0); //for drawing triangle near the head
	 glBegin(GL_POLYGON);
	 glVertex2i(290,286);
	 glVertex2i(320,250);
	 glVertex2i(280,260);
	 glEnd();
	 glColor3f(0.0,0.0,0.0);
	 glBegin(GL_POLYGON); //for drawing triangle near the stomach
	 glVertex2i(258,238);
	 glVertex2i(272,238);
	 glVertex2i(270,260);
	 glEnd();
	 
	 glColor3f(0.0,0.0,0.0);
	 glPushMatrix();
	 glTranslatef(272,270,0);
	 glutSolidSphere(5,100,100);
	 glPopMatrix();
	 
	 glColor3f(1.0,1.0,1.0);
	 glPushMatrix();
	 glTranslatef(272,270,0);
	 glutSolidSphere(3,100,100);
	 glPopMatrix();
	 
	
	 glColor3f(0.0,0.0,0.0);
	 glBegin(GL_QUADS); //for drawing first leg
	 glVertex2i(168,150);
	 glVertex2i(175,155);
	 glVertex2i(175,170);
	 glVertex2i(168,170);
	 glEnd();
	 glColor3f(0.0,0.0,0.0);
	 glBegin(GL_POLYGON); 
	 glVertex2i(168,150);
	 glVertex2i(175,155);
	 glVertex2i(178,135);
	 glEnd();
	 glColor3f(0.0,0.0,0.0);
	 glLineWidth(5.0);
	 glBegin(GL_LINES); //crow fingure
	 glVertex2i(178,137);
	 glVertex2i(176,129);
	 glEnd();
	 
	glColor3f(0.0,0.0,0.0);
	 glBegin(GL_QUADS); //for drawing  second legs
	 glVertex2i(200,153);
	 glVertex2i(207,158);
	 glVertex2i(207,175);
	 glVertex2i(200,175);
	 glEnd();
	 
	 glColor3f(0.0,0.0,0.0);
	 glBegin(GL_POLYGON); 
	 glVertex2i(200,153);
	 glVertex2i(207,158);
	 glVertex2i(204,142);
	 glEnd();
	 glColor3f(0.0,0.0,0.0);
	 glLineWidth(5.0);
	 glBegin(GL_LINES); //crow fingure
	 glVertex2i(204,142);
	 glVertex2i(202,135);
	 glEnd();
	 if(s==1)
	 {
	    	glColor3f(0.4352,0.4588,0.4078);
	 	   glPushMatrix();
	       glTranslatef(310,240,0);
	       glScalef(0.7,0.5,0.0);
	       glutSolidSphere(30,50,50);
	       glPopMatrix();
		 
	 }
	 glColor3f(0.0,0.0,0.0);
	 glBegin(GL_QUADS); //for drwaing wing
	 glVertex2i(80,250);
	 glVertex2i(135,220);
	 glVertex2i(240,250);
	 glVertex2i(140,270);
	 glEnd();
	 
}
void flower()
{
	
	glColor3f(0.058823529,0.184313725,0.003921569);
	glBegin(GL_POLYGON);
	glVertex2f(20,50);
	glVertex2f(50,50);
	glVertex2f(35,270);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(20,50);
	glVertex2f(50,50);
	glVertex2f(28,250);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(20,50);
	glVertex2f(50,50);
	glVertex2f(42,250);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(20,50);
	glVertex2f(50,50);
	glVertex2f(56,250);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(20,50);
	glVertex2f(50,50);
	glVertex2f(14,250);
	glBegin(GL_POLYGON);
	glVertex2f(20,50);
	glVertex2f(50,50);
	glVertex2f(20,250);
	glBegin(GL_POLYGON);
	glVertex2f(20,50);
	glVertex2f(50,50);
	glVertex2f(14,250);
	glEnd();
	glPointSize(5);
	glBegin(GL_POINTS);
			glColor3f(1.0,1.0,0.0);
			glVertex2i(35,270);
			glVertex2i(28,250);
			glVertex2i(42,250);
			glVertex2i(56,250);
			glVertex2i(20,250);
		glEnd();
}
void commonflower()
{
	 int i;
	 for(i=830;i<=950;i=i+30)
	   {
      	 glPushMatrix();
         glTranslatef(i,250,0);
          flower();
          glPopMatrix();
      }
      for(i=0;i<=509;i=i+30)
	   {
      	 glPushMatrix();
         glTranslatef(i,250,0);
          flower();
          glPopMatrix();
      }
}
void grass()
{
	glBegin(GL_POLYGON);
	glColor3f(0.058823529,0.184313725,0.003921569);
	glVertex2f(20,50);
	glVertex2f(50,50);
	glVertex2f(35,130);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(20,50);
	glVertex2f(50,50);
	glVertex2f(28,125);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(20,50);
	glVertex2f(50,50);
	glVertex2f(42,125);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(20,50);
	glVertex2f(50,50);
	glVertex2f(56,125);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(20,50);
	glVertex2f(50,50);
	glVertex2f(14,125);
	glEnd();
	glPointSize(5);
	glBegin(GL_POINTS);
			glColor3f(1.0,0.0,0.0);
			glVertex2i(35,130);
			glVertex2i(28,125);
			glVertex2i(42,125);
			glVertex2i(56,125);
			glVertex2i(14,125);
		glEnd();
}
void display5()
{
	glClear(GL_COLOR_BUFFER_BIT);
    title6();

}
void display4()
{
    int i;
    glClear(GL_COLOR_BUFFER_BIT);
    ground();
     
	road(0);
	for(i=800;i<=950;i=i+30){
      	 glPushMatrix();
         glTranslatef(i,50,0);
          flower();
          glPopMatrix();
     }
     
	sun();
    home();
    mountain();
   	x=640;y=820;
	glPushMatrix(); //for drawing clouds
	glTranslatef(0,0,0);
	cloud(x+80,y+10);
    cloud(x,y);  
    cloud(x-10,y); //up to here for drawing rightmost third cloud
	cloud(x-400,y+80); // this is for drawing leftmost first cloud
    cloud(x-200,y+30); //this is for drawing middle cloud
    glScalef(0.8,1.0,1.0);
	glTranslatef(1500,0,0);
	cloud(x+80,y+10);
    cloud(x,y);  
    cloud(x-10,y); //up to here for drawing rightmost third cloud
	cloud(x-400,y+80); // this is for drawing leftmost first cloud
    cloud(x-200,y+30); //this is
	glPopMatrix();
	streetlight();

	glPushMatrix();  //for drawing trees
	glTranslatef(0,0,0);
	tree2();  //for drawing cone shape tree
	glTranslatef(100,50,0);
	tree1(1);  //for drawing normal tree
	glTranslatef(270,50,0);
	tree1(1);  //for drawing normal tree
	glPopMatrix();

	glPushMatrix(); 
    glTranslatef(-80,220,0);
	glScalef(1.5,1.5,0.0);
	tree();
	glPopMatrix();

	glPushMatrix(); 
    glTranslatef(300,-10,0);
	glScalef(0.6,0.6,0.0);
	pot();
	sphere();
	glPopMatrix();
	glColor3f(0.9,1.0,1.0);
	if(in==0)
	{
	    glPushMatrix(); 
	    glTranslatef(360,60,0); 
		glScalef(0.35,0.2,0.0);
		sphere();
		glPopMatrix();
	}
	else if(in==1)
	{
	    glPushMatrix(); 
	    glTranslatef(350,46,0); 
		glScalef(0.4,0.28,0.0);
		sphere();
		glPopMatrix();
	}
	else if(in==2)
	{
	    glPushMatrix(); 
	    glTranslatef(335,43,0); 
		glScalef(0.45,0.3,0.0);
		sphere();
		glPopMatrix();
	}
	else if(in==3)
	{
	    glPushMatrix(); 
	    glTranslatef(300,9,0); 
		glScalef(0.6,0.5,0.0);
		sphere();
		glPopMatrix();
	}
	else if(in==4)
	{
	    glPushMatrix(); 
	    glTranslatef(300,-10,0); 
		glScalef(0.6,0.6,0.0);
		sphere();
		glTranslatef(25,90,0);
	    glScalef(0.9,0.7,0.0);
		raise();
		glPopMatrix();
	}
	
	stone();
    glPushMatrix();
	for(i=0;i<=1000;i=i+20){
		 if( i==620 || i==640 || i==660 || i==680 || i==680 || i==700 || i==720|| i==740 || i==760|| i==780)
		       continue;
	     gate(i);
		
	}
	glPopMatrix();
	
	glPushMatrix(); 
    glTranslatef(40,-30,0);
	glScalef(0.4,0.7,0.0);
    well();
    glPopMatrix();

	glPushMatrix(); //code to move crow
    glTranslatef(t1,t2, 0);
    glScalef(0.2,0.5,0.5);
	if(r==1){
		glTranslatef(350 , 0 , 0);
		glRotatef(180 , 0 , 1 , 0);
	}
	d=4;
    crow(d);
    glPopMatrix();
    glPushMatrix();
	for(i=0;i<=1000;i=i+30){
		glTranslatef(15+i,0,0);
		grass();
	}
	glPopMatrix();
	glutSwapBuffers();
    glFlush();	

}
void display3()
{
	  int i;
      glClear(GL_COLOR_BUFFER_BIT);
      ground();
     road(3);
	sun();
    mountain();
    glPushMatrix();
    for(i=0;i<=1000;i=i+20)
	{
			glTranslatef(5+i,0,0);
	 		grass();
	}
    glPopMatrix();
    for(i=0;i<=1000;i=i+30)
    {
      	 glPushMatrix();
         glTranslatef(i,250,0);
          flower();
          glPopMatrix();
    }
	x=640;y=820;
	glPushMatrix(); //for drawing clouds
	glTranslatef(0,0,0);
	cloud(x+80,y+10);
    cloud(x,y);  
    cloud(x-10,y); //up to here for drawing rightmost third cloud
	cloud(x-400,y+80); // this is for drawing leftmost first cloud
    cloud(x-200,y+30); //this is for drawing middle cloud
    glScalef(0.8,1.0,1.0);
	glTranslatef(1500,0,0);
	cloud(x+80,y+10);
    cloud(x,y);  
    cloud(x-10,y); //up to here for drawing rightmost third cloud
	cloud(x-400,y+80); // this is for drawing leftmost first cloud
    cloud(x-200,y+30); //this is
    
	glPopMatrix();
	glPushMatrix();
    glTranslatef(d3,800, 0);
    glScalef(0.2,0.5,0.5);
    crow(d);
    glPopMatrix();

	glPushMatrix();  //for drawing trees
	glTranslatef(0,0,0);
	tree2();  //for drawing cone shape tree
	glTranslatef(100,50,0);
	tree1(1);  //for drawing normal tree
	glTranslatef(270,50,0);
	tree1(1);  //for drawing normal tree
   	glTranslatef(200,-70,0);//for drawing cone shape tree
   	tree2();
   	glTranslatef(240,-70,0);//for drawing cone shape tree
   	tree2();
	glPopMatrix();
	glPushMatrix(); 
	glTranslatef(-80,220,0);
	glScalef(1.5,1.5,0.0);
	tree();
	
	glPopMatrix();
	glutSwapBuffers();
    glFlush();
}
void display2()
{
	int i;
	glClear(GL_COLOR_BUFFER_BIT);
      ground();
      road(0);
	sun();
	mountain();
    house();
  
    glPushMatrix();
   	for(i=0;i<=1000;i=i+30)
	{
		glTranslatef(15+i,0,0);
	 	grass();
	}
	glPopMatrix();
	commonflower();
	x=640;y=820;
	glPushMatrix(); //for drawing clouds
	glTranslatef(0,0,0);
	cloud(x+80,y+10);
    cloud(x,y);  
    cloud(x-10,y); //up to here for drawing rightmost third cloud
	cloud(x-400,y+80); // this is for drawing leftmost first cloud
    cloud(x-200,y+30); //this is for drawing middle cloud
    glScalef(0.8,1.0,1.0);
	glTranslatef(1500,0,0);
	cloud(x+80,y+10);
    cloud(x,y);  
    cloud(x-10,y); //up to here for drawing rightmost third cloud
	cloud(x-400,y+80); // this is for drawing leftmost first cloud
    cloud(x-200,y+30); //this is
    
	glPopMatrix();
	glPushMatrix();
    glTranslatef(d2,800, 0);
    glScalef(0.2,0.5,0.5);
    crow(d);
    glPopMatrix();
    

	glPushMatrix();  //for drawing trees
	glTranslatef(0,0,0);
	tree2();  //for drawing cone shape tree
	glTranslatef(100,50,0);
	tree1(1);  //for drawing normal tree
   	glTranslatef(200,-70,0);
	tree2();
	glPopMatrix();
	streetlight();
	glPushMatrix();
	for(i=0;i<=1000;i=i+20){
		 if( i==620 || i==640 || i==660 || i==680 || i==680 || i==700 || i==720|| i==740 || i==760|| i==780)
		       continue;
	     gate(i);
		
	}
	
	glPopMatrix();
	glutSwapBuffers();
    glFlush();
}
void display1()
{
	int i;
	glClear(GL_COLOR_BUFFER_BIT);
        ground();
    road(0);
	sun();
    house();
    mountain();
    
    glPushMatrix();
    for(i=0;i<=1000;i=i+30)
	{
		glTranslatef(15+i,0,0);
	 	grass();
	}
	glPopMatrix();
    commonflower();
    x=640;y=820;
	glPushMatrix(); //for drawing clouds
	glTranslatef(d1,0,0);
	cloud(x+80,y+10);
        cloud(x,y);  
        cloud(x-10,y); //up to here for drawing rightmost third cloud
	cloud(x-400,y+80); // this is for drawing leftmost first cloud
        cloud(x-200,y+30); //this is for drawing middle cloud
        glScalef(0.8,1.0,1.0);
	glTranslatef(d1+1500,0,0);
	cloud(x+80,y+10);
        cloud(x,y);  
        cloud(x-10,y); //up to here for drawing rightmost third cloud
	cloud(x-400,y+80); // this is for drawing leftmost first cloud
        cloud(x-200,y+30); //this is
   	glPopMatrix();
    glPushMatrix();  //for drawing trees
	glTranslatef(0,0,0);
	tree2();  //for drawing cone shape tree
	glTranslatef(100,50,0);
	tree1(1);  //for drawing normal tree
   	glTranslatef(200,-70,0);
	tree2();
	glPopMatrix();
	
	streetlight();
	glPushMatrix();
	for(i=0;i<=1000;i=i+20){
		 if( i==620 || i==640 || i==660 || i==680 || i==680 || i==700 || i==720|| i==740 || i==760|| i==780)
		       continue;
	     gate(i);
		
	}
	
	glPopMatrix();
	glutSwapBuffers();
    glFlush();

}
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    title();

}
void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
	    case '1':
	    		printf("1 Pressed\n");			
	            glutDisplayFunc(display1);
	            timer1(0);
                break;
       case '2':
                printf("2 Pressed\n");			
	    		glutDisplayFunc(display2);
	    		timer2(0);
            	break;
        case '3':
                printf("3 Pressed\n");			
	    		glutDisplayFunc(display3);
	    		timer3(0);
            	break;
        case '4':
                printf("4 Pressed\n");			
	    		glutDisplayFunc(display4);
	    		timer4(0);
            	break;
        case '5':
                printf("5 Pressed\n");			
	    		glutDisplayFunc(display5);
            	break;
        default:
        	     exit(0);
       
}
}
int main(int argc, char** argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(2000,2800);			
	glutInitWindowPosition(0,0);			
	glutCreateWindow("Thirsty Crow");
    glClearColor(0.803921568627451,0.9411764705882353,1.0,0.0);				
	glMatrixMode(GL_PROJECTION);				
	glLoadIdentity();					
	glOrtho(0.0,1000.0,0.0,1000.0,-500,+500);				
	glutDisplayFunc(display);
	glutKeyboardFunc(handleKeypress);
	glutMainLoop();
	return 0;
}

