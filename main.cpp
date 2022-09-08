///Name: Neaz Ahamed
///ID: 04190101292
///Department: Computer Science And Engineering
///Course: Computer Graphics Lab Work


#include<windows.h>
#include <GL/glut.h>
#include <math.h>

int stateCloud1 = -1, stateCloud2 = -1, stateSun = 1, stateBoat = 1, stateBird =1;
float x_cloud1 = 0, x_cloud2 = -50, x_sun = 180, x_boat = 120, y_boat=75;

void init(void){
	glClearColor(0.44, 0.63, 0.88, 0.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0, 200.0, 0.0, 160.0);
}

void ground(void){
    int XcngH = 60,YcngH = 20;

    glBegin(GL_POLYGON);
        glColor3ub(102,255,51);
            glVertex2i(0,65);
            glVertex2i(100,65);

            glVertex2i(115,57);
            glVertex2i(105,50);

            glVertex2i(110,45);
            glVertex2i(107,40);
            glVertex2i(115,35);

            glVertex2i(110,30);
            glVertex2i(105,25);
            glVertex2i(110,20);

            glVertex2i(100,15);
            glVertex2i(110,8);

            glVertex2i(105,0);
            glVertex2i(0,0);

        glEnd();

        glBegin(GL_POLYGON);
        glColor3ub(153,153,102);

            glVertex2i(45,25);

            glVertex2i(31,52);
            glVertex2i(39,52);

            glVertex2i(45,41);

            glVertex2i(62,54);
            glVertex2i(68,54);

            glVertex2i(48,35);

            glVertex2i(55,25);
            glVertex2i(50,0);
            glVertex2i(40,0);
        glEnd();
}


void ground2(void){

    glBegin(GL_POLYGON);
        glColor3ub(102,255,51);
            glVertex2i(200,65);
            glVertex2i(193,68);
            glVertex2i(187,63);
            glVertex2i(186,64);
            glVertex2i(185,65);
            glVertex2i(180,65);

            glVertex2i(179,66);
            glVertex2i(178,67);
            glVertex2i(177,68);
            glVertex2i(176,67);
            glVertex2i(175,66);
            glVertex2i(174,65);
            glVertex2i(172,64);
            glVertex2i(170,63);
            glVertex2i(168,60);
            glVertex2i(168,55);
            glVertex2i(165,52);
            glVertex2i(165,50);
            glVertex2i(167,45);
            glVertex2i(167,40);
            glVertex2i(165,35);
            glVertex2i(165,30);
            glVertex2i(166,25);
            glVertex2i(166,15);
            glVertex2i(170,0);
            glVertex2i(200,0);
    glEnd();
}

void OppositeSide(void){
    glBegin(GL_POLYGON);
    glColor3ub(51,204,255);
        glVertex2i(0,110);
        glVertex2i(0,160);
        glVertex2i(200,160);
        glVertex2i(200,110);
    glEnd();
}

void HouseLeft(int xAxis, int yAxis){
    int XcngH = xAxis,YcngH = yAxis;
    glBegin(GL_TRIANGLES);
	glColor3ub(105,119,155);

        glVertex2i(62-XcngH,102-YcngH);
        glVertex2i(72-XcngH,122-YcngH);
        glVertex2i(80-XcngH,102-YcngH);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(105,119,155);

        glVertex2i(72-XcngH,122-YcngH);
        glVertex2i(100-XcngH,122-YcngH);
        glVertex2i(112-XcngH,102-YcngH);
        glVertex2i(78-XcngH,102-YcngH);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(244,243,243);

        glVertex2i(64-XcngH,72-YcngH);
        glVertex2i(64-XcngH,102-YcngH);
        glVertex2i(80-XcngH,102-YcngH);
        glVertex2i(80-XcngH,72-YcngH);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(105,119,155);

        glVertex2i(68-XcngH,72-YcngH);
        glVertex2i(68-XcngH,92-YcngH);
        glVertex2i(76-XcngH,92-YcngH);
        glVertex2i(76-XcngH,72-YcngH);
    glEnd();


    glBegin(GL_POLYGON);
	glColor3ub(223,223,223);

        glVertex2i(80-XcngH,72-YcngH);
        glVertex2i(80-XcngH,102-YcngH);
        glVertex2i(110-XcngH,102-YcngH);
        glVertex2i(110-XcngH,72-YcngH);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(105,119,155);

        glVertex2i(91-XcngH,72-YcngH);
        glVertex2i(91-XcngH,92-YcngH);
        glVertex2i(99-XcngH,92-YcngH);
        glVertex2i(99-XcngH,72-YcngH);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(105,119,155);

        glVertex2i(82-XcngH,82-YcngH);
        glVertex2i(82-XcngH,92-YcngH);
        glVertex2i(89-XcngH,92-YcngH);
        glVertex2i(89-XcngH,82-YcngH);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(105,119,155);

        glVertex2i(101-XcngH,82-YcngH);
        glVertex2i(101-XcngH,92-YcngH);
        glVertex2i(108-XcngH,92-YcngH);
        glVertex2i(108-XcngH,82-YcngH);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(242,242,242);

        glVertex2i(72-XcngH,122-YcngH);
        glVertex2i(80-XcngH,102-YcngH);

    glEnd();
}

void HouseRight(int xAxis, int yAxis){
    int XcngH = xAxis,YcngH=yAxis;

    glBegin(GL_POLYGON);
	glColor3ub(244,243,243);

        glVertex2i(112-XcngH,74-YcngH);
        glVertex2i(112-XcngH,100-YcngH);
        glVertex2i(138-XcngH,100-YcngH);
        glVertex2i(138-XcngH,74-YcngH);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(223,223,223);

        glVertex2i(138-XcngH,74-YcngH);
        glVertex2i(138-XcngH,100-YcngH);
        glVertex2i(145-XcngH,115-YcngH);
        glVertex2i(151-XcngH,100-YcngH);
        glVertex2i(151-XcngH,74-YcngH);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(105,119,155);

        glVertex2i(122-XcngH,74-YcngH);
        glVertex2i(122-XcngH,90-YcngH);
        glVertex2i(128-XcngH,90-YcngH);
        glVertex2i(128-XcngH,74-YcngH);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(105,119,155);

        glVertex2i(114-XcngH,82-YcngH);
        glVertex2i(114-XcngH,90-YcngH);
        glVertex2i(120-XcngH,90-YcngH);
        glVertex2i(120-XcngH,82-YcngH);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(105,119,155);

        glVertex2i(130-XcngH,82-YcngH);
        glVertex2i(130-XcngH,90-YcngH);
        glVertex2i(136-XcngH,90-YcngH);
        glVertex2i(136-XcngH,82-YcngH);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(105,119,155);

        glVertex2i(112-XcngH,100-YcngH);
        glVertex2i(118-XcngH,115-YcngH);
        glVertex2i(145-XcngH,115-YcngH);
        glVertex2i(138-XcngH,100-YcngH);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(105,119,155);

        glVertex2i(141-XcngH,80-YcngH);
        glVertex2i(141-XcngH,92-YcngH);
        glVertex2i(148-XcngH,92-YcngH);
        glVertex2i(148-XcngH,80-YcngH);
    glEnd();
}

void cloud1(void){

    int i,Radius=5,y_cloud1=142;
    float theta;

	///TopLeft
	glBegin(GL_POLYGON);
    glColor3ub(255,236,237);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(x_cloud1+13+Radius*cos(theta),y_cloud1+11+Radius*sin(theta));
	}
	glEnd();

	///TopMiddle
    glColor3ub(255,236,237);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/50;
	  glVertex2f(x_cloud1+19+Radius*cos(theta),y_cloud1+15+Radius*sin(theta));
	}
	glEnd();

	///TopRight
	glBegin(GL_POLYGON);
    glColor3ub(255,236,237);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(x_cloud1+25+Radius*cos(theta),y_cloud1+11+Radius*sin(theta));
	}
	glEnd();

	///Middle
    glColor3ub(255,236,237);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/50;
	  glVertex2f(x_cloud1+19+Radius*cos(theta),y_cloud1+7+Radius*sin(theta));
	}
	glEnd();

    ///DownLeft
	glBegin(GL_POLYGON);
    glColor3ub(255,236,237);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(x_cloud1+15+Radius*cos(theta),y_cloud1+4+Radius*sin(theta));
	}
	glEnd();

    ///DownRight
	glBegin(GL_POLYGON);
    glColor3ub(255,236,237);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(x_cloud1+23+Radius*cos(theta),y_cloud1+4+Radius*sin(theta));
	}
	glEnd();
}

void moveCloud1(void){
    	if(stateCloud1 == -1){
            glColor3ub(39,118,243);
            if(x_cloud1<=300){
                x_cloud1 = x_cloud1+.01;
            }
            else{
                stateCloud1 = 1;
            }
       }
       else{
           glColor3ub(238,28,37);
            if(x_cloud1>-40){
                x_cloud1 = x_cloud1-.01;
            }
            else{
                stateCloud1 = -1;
            }
        }
    glutPostRedisplay();
}

void cloud2(void){
    int i,Radius=5,y_cloud2=130;
    float theta;

	///TopLeft
	glBegin(GL_POLYGON);
    glColor3ub(255,236,237);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(x_cloud2+13+Radius*cos(theta),y_cloud2+11+Radius*sin(theta));
	}
	glEnd();

	///TopMiddle
    glColor3ub(255,236,237);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/50;
	  glVertex2f(x_cloud2+19+Radius*cos(theta),y_cloud2+15+Radius*sin(theta));
	}
	glEnd();

	///TopRight
	glBegin(GL_POLYGON);
    glColor3ub(255,236,237);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(x_cloud2+25+Radius*cos(theta),y_cloud2+11+Radius*sin(theta));
	}
	glEnd();

	///Middle
    glColor3ub(255,236,237);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/50;
	  glVertex2f(x_cloud2+19+Radius*cos(theta),y_cloud2+7+Radius*sin(theta));
	}
	glEnd();

    ///DownLeft
	glBegin(GL_POLYGON);
    glColor3ub(255,236,237);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(x_cloud2+15+Radius*cos(theta),y_cloud2+4+Radius*sin(theta));
	}
	glEnd();

    ///DownRight
	glBegin(GL_POLYGON);
    glColor3ub(255,236,237);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(x_cloud2+23+Radius*cos(theta),y_cloud2+4+Radius*sin(theta));
	}
	glEnd();
}

void moveCloud2(void){
    	if(stateCloud2 == -1){
            //glColor3ub(39,118,243);
            if(x_cloud2<=300){
                x_cloud2 = x_cloud2+.01;
            }
            else{
                stateCloud2 = 1;
            }
       }
       else{
           glColor3ub(238,28,37);
            if(x_cloud2>-40){
                x_cloud2 = x_cloud2-.005;
            }
            else{
                stateCloud2 = -1;
            }
        }
    glutPostRedisplay();
}

void sun(void){
    int i, y_sun = 105;
    float theta2;

    ///Face
    glColor3ub(245, 176, 65);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta2 = i*3.142/180;
	  glVertex2f(x_sun+8+10*cos(theta2),y_sun+35+12*sin(theta2));
	}
	glEnd();

	///LeftEye
	glColor3ub(255, 255, 255);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta2 = i*3.142/180;
	  glVertex2f(x_sun+3+2*cos(theta2),y_sun+37+4*sin(theta2));
	}
	glEnd();

	///RightEye
	glColor3ub(255, 255, 255);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta2 = i*3.142/180;
	  glVertex2f(x_sun+13+2*cos(theta2),y_sun+37+4*sin(theta2));
	}
	glEnd();

	glColor3ub(83, 39, 56);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta2 = i*3.142/180;
	  glVertex2f(x_sun+3+1*cos(theta2),y_sun+35.5+2*sin(theta2));
	}
	glEnd();

	glColor3ub(83, 39, 56);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta2 = i*3.142/180;
	  glVertex2f(x_sun+13+1*cos(theta2),y_sun+35.5+2*sin(theta2));
	}
	glEnd();

	///Mouth
	glColor3ub(151, 53, 90);
	float ry;
    float rx=ry=3,cx=x_sun+8,cy=y_sun+29;
    glColor3ub(255, 255, 255);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx,cy);
    for(int i=0;i<=100;i++)
    {
        float angle = 2.0f * 3.1416f * i/100;
        float x = rx * cos(angle);
        float y = ry * sin(angle);
        glVertex2f((x+cx),(y+cy));
    }
    glEnd();

    cy=y_sun+31;
    glColor3ub(245, 176, 65);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx,cy);
    for(int i=0;i<=100;i++)
    {
        float angle = 2.0f * 3.1416f * i/100;
        float x = rx * cos(angle);
        float y = ry * sin(angle);
        glVertex2f((x+cx),(y+cy));
    }
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(245, 176, 65);
        glVertex2i(x_sun+19,y_sun+35);
        glVertex2i(x_sun+24,y_sun+35);

        glVertex2i(x_sun+19,y_sun+40);
        glVertex2i(x_sun+23,y_sun+42);

        glVertex2f(x_sun+16,y_sun+44);
        glVertex2i(x_sun+20,y_sun+49);

        glVertex2f(x_sun+13,y_sun+47);
        glVertex2i(x_sun+14,y_sun+52);

        glVertex2i(x_sun+8,y_sun+48);
        glVertex2i(x_sun+8,y_sun+53);

        glVertex2i(x_sun+4,y_sun+48);
        glVertex2i(x_sun+3,y_sun+53);

        glVertex2i(x_sun+0,y_sun+45);
        glVertex2i(x_sun-2,y_sun+50);

        glVertex2i(x_sun-2,y_sun+41);
        glVertex2i(x_sun-7,y_sun+45);

        glVertex2i(x_sun-3,y_sun+35);
        glVertex2i(x_sun-8,y_sun+35);

        glVertex2i(x_sun-3,y_sun+30);
        glVertex2i(x_sun-7,y_sun+28);

        glVertex2i(x_sun-1,y_sun+26);
        glVertex2i(x_sun-4,y_sun+23);

        glVertex2i(x_sun+2,y_sun+23);
        glVertex2i(x_sun+1,y_sun+19);

        glVertex2i(x_sun+8,y_sun+22);
        glVertex2i(x_sun+8,y_sun+17);

        glVertex2i(x_sun+12,y_sun+22);
        glVertex2i(x_sun+14,y_sun+17);

        glVertex2i(x_sun+16,y_sun+25);
        glVertex2i(x_sun+19,y_sun+20);

        glVertex2i(x_sun+19,y_sun+30);
        glVertex2i(x_sun+23,y_sun+27);
    glEnd();

}

void moveSun(void){
    if(stateSun == 1){
            if(x_sun > -40){
                x_sun = x_sun - .01;
            }
            else{
                x_sun = 200;
            }
       }
    glutPostRedisplay();
}

void Tree1(int xAxis, int yAxis){

    int i, Radius=5,x_team=xAxis,y_team=yAxis, x_leaves = x_team-16, y_leaves=y_team+23;
    float theta;

    glColor3ub(102,51,0);
    glBegin(GL_POLYGON);
        glVertex2i(x_team,y_team+30);
        glVertex2i(x_team-2,y_team+34);
        glVertex2i(x_team,y_team+34);
        glVertex2i(x_team+6,y_team+30);
        glVertex2i(x_team+7,y_team+34);
        glVertex2i(x_team+10,y_team+34);
        glVertex2i(x_team+7,y_team+30);
        glVertex2i(x_team+7,y_team);
        glVertex2i(x_team,y_team);
    glEnd();

	glColor3ub(51,204,51);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(x_leaves+14+Radius*cos(theta),y_leaves+16+Radius*sin(theta));
	}
	glEnd();

	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/50;
	  glVertex2f(x_leaves+20+Radius*cos(theta),y_leaves+18+Radius*sin(theta));
	}
	glEnd();

	///TopRight
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(x_leaves+26+Radius*cos(theta),y_leaves+16+Radius*sin(theta));
	}
	glEnd();

	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(x_leaves+12+Radius*cos(theta),y_leaves+9+Radius*sin(theta));
	}
	glEnd();

	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/50;
	  glVertex2f(x_leaves+20+Radius*cos(theta),y_leaves+9+Radius*sin(theta));
	}
	glEnd();

	///MiddleRight
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(x_leaves+28+Radius*cos(theta),y_leaves+9+Radius*sin(theta));
	}
	glEnd();

    ///DownLeft
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(x_leaves+16+Radius*cos(theta),y_leaves+5+Radius*sin(theta));
	}
	glEnd();

    ///DownRight
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(x_leaves+24+Radius*cos(theta),y_leaves+5+Radius*sin(theta));
	}
	glEnd();
}

void Tree2(int xAxis, int yAxis){
    int x_team=xAxis, y_team=yAxis, x_leaves = x_team-6, y_leaves=y_team+5;
    float theta;

    glColor3ub(102,51,0);
    glBegin(GL_POLYGON);
        glVertex2i(x_team+0,y_team);
        glVertex2i(x_team+0,y_team+5);
        glVertex2i(x_team+4,y_team+5);
        glVertex2i(x_team+4,y_team);
    glEnd();

    glColor3ub(34,139,34);
    glBegin(GL_POLYGON);
        glVertex2i(x_leaves+8,y_leaves+18);
        glVertex2i(x_leaves+14,y_leaves+12);
        glVertex2i(x_leaves+10,y_leaves+12);
        glVertex2i(x_leaves+14,y_leaves+6);
        glVertex2i(x_leaves+10,y_leaves+6);
        glVertex2i(x_leaves+14,y_leaves+0);
        glVertex2i(x_leaves+2,y_leaves+0);
        glVertex2i(x_leaves+6,y_leaves+6);
        glVertex2i(x_leaves+2,y_leaves+6);
        glVertex2i(x_leaves+6,y_leaves+12);
        glVertex2i(x_leaves+2,y_leaves+12);
    glEnd();
}

void Tree3(int xAxis, int yAxis){
    int x_team=xAxis, y_team=yAxis, x_leaves = x_team, y_leaves=y_team;
    float theta;

    glColor3ub(102,51,0);
    glBegin(GL_POLYGON);
        glVertex2i(x_team+6,y_team+0);
        glVertex2i(x_team+6,y_team+6);
        glVertex2i(x_team+10,y_team+6);
        glVertex2i(x_team+10,y_team+0);
    glEnd();

    glColor3ub(34,139,34);
    glBegin(GL_POLYGON);
        glVertex2i(x_leaves+2,y_leaves+6);
        glVertex2i(x_leaves+8,y_leaves+24);
        glVertex2i(x_leaves+14,y_leaves+6);
    glEnd();
}

void Green(int xAxis, int yAxis){
    int x_green=xAxis, y_green=yAxis;

    ///Tree
    glColor3ub(34,139,34);
    glBegin(GL_POLYGON);
        glVertex2i(x_green+0,y_green+0);
        glVertex2i(x_green+3,y_green+25);
        glVertex2i(x_green+6,y_green+5);
        glVertex2i(x_green+9,y_green+35);
        glVertex2i(x_green+12,y_green+5);
        glVertex2i(x_green+13,y_green+30);
        glVertex2i(x_green+20,y_green+15);
        glVertex2i(x_green+21,y_green+40);
        glVertex2i(x_green+32,y_green+0);
        glVertex2i(x_green+32,y_green+35);
        glVertex2i(x_green+40,y_green+0);
        glVertex2i(x_green+0,y_green+0);
    glEnd();
}

void Boat(){

    glColor3ub(223,223,223);
    glBegin(GL_POLYGON);
        glVertex2i(x_boat+12,y_boat+12);
        glVertex2i(x_boat+14,y_boat+12);
        glVertex2i(x_boat+20,y_boat+30);
        glVertex2i(x_boat+22,y_boat+30);
    glEnd();

    ///Boat
    glColor3ub(0,0,0);
    glBegin(GL_POLYGON);
        glVertex2i(x_boat+16,y_boat+16);
        glVertex2i(x_boat+48,y_boat+16);
        glVertex2i(x_boat+56,y_boat+24);
        glVertex2i(x_boat+8,y_boat+24);
    glEnd();

    glColor3ub(255,153,0);
    glBegin(GL_POLYGON);
        glVertex2i(x_boat+32,y_boat+38);
        glVertex2i(x_boat+40,y_boat+36);
        glVertex2i(x_boat+40,y_boat+46);
        glVertex2i(x_boat+32,y_boat+48);
    glEnd();

    glColor3ub(136,204,0);
    glBegin(GL_POLYGON);
        glVertex2i(x_boat+35,y_boat+24);
        glVertex2i(x_boat+37,y_boat+24);
        glVertex2i(x_boat+37,y_boat+50);
        glVertex2i(x_boat+35,y_boat+50);
    glEnd();

    glColor3ub(255,153,0);
    glBegin(GL_POLYGON);
        glVertex2i(x_boat+24,y_boat+24);
        glVertex2i(x_boat+48,y_boat+24);
        glVertex2i(x_boat+44,y_boat+32);
        glVertex2i(x_boat+28,y_boat+32);
    glEnd();
}

void BoatMove(){
    if(stateBoat == -1){
            if(x_boat <= 210){
                x_boat = x_boat +.01;
            }
            else{
                stateBoat = 1;
                y_boat = 75;
            }
       }
       else{
            if(x_boat > -60){
                x_boat = x_boat-.01;
            }
            else{
                stateBoat = -1;
                y_boat = 60;
            }
        }
    glutPostRedisplay();
}
void Boat2(int xAxis, int yAxis){
    int x_boat2 = xAxis, y_boat2 = yAxis;

    glColor3ub(0,0,0);
    glBegin(GL_POLYGON);
        glVertex2i(x_boat2+16,y_boat2+16);
        glVertex2i(x_boat2+48,y_boat2+16);
        glVertex2i(x_boat2+56,y_boat2+24);
        glVertex2i(x_boat2+48,y_boat2+28);
        glVertex2i(x_boat2+16,y_boat2+28);
        glVertex2i(x_boat2+8,y_boat2+24);
    glEnd();

    glColor3ub(122,122,82);
    glBegin(GL_POLYGON);
        glVertex2i(x_boat2+16,y_boat2+21);
        glVertex2i(x_boat2+48,y_boat2+21);
        glVertex2i(x_boat2+54,y_boat2+24);
        glVertex2i(x_boat2+48,y_boat2+26);
        glVertex2i(x_boat2+16,y_boat2+26);
        glVertex2i(x_boat2+10,y_boat2+24);
    glEnd();

    glColor3ub(255,219,77);
    glBegin(GL_POLYGON);
        glVertex2i(x_boat2+20,y_boat2+20);
        glVertex2i(x_boat2+44,y_boat2+20);
        glVertex2i(x_boat2+40,y_boat2+32);
        glVertex2i(x_boat2+24,y_boat2+32);
    glEnd();

    glColor3ub(255,219,77);
    glBegin(GL_POLYGON);
        glVertex2i(x_boat2+40,y_boat2+32);
        glVertex2i(x_boat2+44,y_boat2+27);
        glVertex2i(x_boat2+20,y_boat2+27);
        glVertex2i(x_boat2+24,y_boat2+32);
    glEnd();

    glColor3ub(231,124,68);
    glBegin(GL_POLYGON);
        glVertex2i(x_boat2+55,y_boat2+26);
        glVertex2i(x_boat2+56,y_boat2+26);
        glVertex2i(x_boat2+56,y_boat2+35);
        glVertex2i(x_boat2+55,y_boat2+35);
    glEnd();

    glColor3ub(223,223,223);
    glBegin(GL_POLYGON);
        glVertex2i(x_boat2+48,y_boat2+26);
        glVertex2i(x_boat2+49,y_boat2+26);
        glVertex2i(x_boat2+56,y_boat2+30);
        glVertex2i(x_boat2+55,y_boat2+30);
    glEnd();
}
void Neaz(void){
	glClear(GL_COLOR_BUFFER_BIT);

    OppositeSide();

    sun();
    moveSun();

	cloud1();
	moveCloud1();

	cloud2();
	moveCloud2();

    Tree1(15,110);
    Tree1(80,110);
    Tree1(175,110);
    Tree2(5,110);
    Tree2(190,110);
    Tree3(22,110);
    Tree3(158,110);
    Green(37,110);
    Green(106,110);

	Boat();
	BoatMove();
    ground();

	ground2();
	Tree1(192,23);
	Tree3(168,20);
	Tree2(175,0);
	Green(183,0);
	Boat2(115,20);
	HouseLeft(60,20);
	HouseRight(60,20);

	glFlush();
}

int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowPosition(50, 65);
	glutInitWindowSize(1200, 700);
	glutCreateWindow("04190101292");
	init();
	glutDisplayFunc(Neaz);
	glutMainLoop();

	return 0;
}
