// //b) am tra di chuot 
//#include <GL/gl.h>
//#include <GL/glu.h>
//#include <GL/glut.h>
//#include <math.h>
//GLuint  thuy = 0;
//GLuint  kim = 0;
//GLuint  traidat = 0; 
//GLuint  hoa = 0;
//GLuint  moc = 0; 
//GLuint  tho = 0;
//GLuint  thienvuong = 0; 
//GLuint  haivuong = 0; 
//float day = 0;
//
// GLfloat mat_specular[] = { 1.0, 1.0, 1.0, 1.0 };
// GLfloat mat_shininess[] = { 50.0 };
// GLfloat light_position[] = { 1.0, 1.0, 1.0, 0.0 };
// 
//void init(void) 
//{
// //
// glClearColor (0.0, 0.0, 0.0, 0.0);
// glShadeModel (GL_SMOOTH);
// glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
// glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
// glLightfv(GL_LIGHT0, GL_POSITION, light_position);
// glEnable(GL_LIGHTING);
// glEnable(GL_LIGHT0);
// glEnable(GL_DEPTH_TEST);
//}
//void display(void)
//{
// glClear (GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//  glLoadIdentity();
//  gluLookAt(5.0, 5.0, 15.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
// //gluLookAt(0.0, 0.0, 5.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
// // sun
// glPushMatrix(); 
//  GLfloat mat_ambien[] = {1.0, 1.0, 0.0f, 1.0f};
//  GLfloat mat_diffuse[] = {1.0, 1.0, 0.0, 1.0};
// glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
// glTranslatef(0.0, 0.0, 0.0);
// //glRotatef((float)thuy,0.0, 1.0, 0.0);
// glutSolidSphere (2.0, 20, 16);
// glutSwapBuffers();
// glPopMatrix();
// 
//
//  // thuy
// glPushMatrix(); 	
//  GLfloat mat_ambien1[] = {0.0, 0.0, 1.0f, 1.0f};
// GLfloat mat_diffuse1[] = {0.0, 0.0, 1.0, 4.0}; 								
// glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, mat_diffuse1);
// //glLightfv(GL_LIGHT0, GL_POSITION, light_position);
// glRotatef(thuy,0.0, -0.1, 0.0);        // pphep quay: toa do quay glRotatef(goc quay,x,y,z) 
// glTranslatef(2.5, 0.0, 0.0); 			 /// phep tinh tien: khoang cach voi sun 
// //glRotatef(thuy,-0.1, -0.3, -0.3);
// glutSolidSphere (0.3, 20, 16);           // tao hinh tron  
// glutSwapBuffers();
// glPopMatrix();
// 
// // kim
// glPushMatrix(); 
// GLfloat mat_diffuse2[] = {1.0,0.0,2.0, 1.0};
// glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, mat_diffuse2);
// //glLightfv(GL_LIGHT0, GL_POSITION, light_position);
// glRotatef(kim,0.0, -0.1, 0.0);
// glTranslatef(3.5, 0.0, 0.0);
// glutSolidSphere (0.4, 20, 16);
// glutSwapBuffers();
// glPopMatrix();
// 
//  // trai dat
// glPushMatrix(); 
// GLfloat mat_diffuse3[] = {0.0,0.0,2.0, 6.0}; 
// glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, mat_diffuse3);
// //glLightfv(GL_LIGHT0, GL_POSITION, light_position);
// glRotatef(traidat,0.0, -0.1, 0.0);
// glTranslatef(5.5, 0.0, 0.0);
// glutSolidSphere (0.7, 20, 16);
// glutSwapBuffers();
// glPopMatrix();
//// 
// // hoa
// glPushMatrix(); 
// GLfloat mat_diffuse4[] = {1.0, 0.0, 0.0, 0.3};
// glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, mat_diffuse4);
// //glLightfv(GL_LIGHT0, GL_POSITION, light_position);
// glRotatef(hoa,0.0, -0.1, 0.0);
// glTranslatef(7.7, 0.0, 0.0);
// glutSolidSphere (0.5, 20, 16);
// glutSwapBuffers();
// glPopMatrix();
// 
// //moc 
// glPushMatrix(); 	
// GLfloat mat_diffuse5[] = {2.0, 1.0, 0.0, 1.0}; 								
// glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, mat_diffuse5);
// //glLightfv(GL_LIGHT0, GL_POSITION, light_position);
// glRotatef(thuy,0.0, -0.1, 0.0);        // pphep quay: toa do quay glRotatef(goc quay,x,y,z) 
// glTranslatef(8.5, 0.0, 0.0); 			 /// phep tinh tien: khoang cach voi sun 
// glRotatef(thuy,0.0, -0.1, 0.0);
// glutSolidSphere (0.3, 20, 16);           // tao hinh tron  
// glutSwapBuffers();
// glPopMatrix();
// 
//  // tho
// glPushMatrix(); 
// GLfloat mat_diffuse6[] = {2.0, 2.0, 1.0, 1.0};
// glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, mat_diffuse6);
// //glLightfv(GL_LIGHT0, GL_POSITION, light_position);
// glRotatef(tho,0.0, -0.1, 0.0);
// glTranslatef(10.5, 0.0, 0.0);
// glutSolidSphere (1.2, 20, 16);
// glutSwapBuffers();
// glPopMatrix();
// 
//  // thien vuong
// glPushMatrix(); 
// GLfloat mat_diffuse7[] = {20.0, 10.0, 10.0, 1.0};
// glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, mat_diffuse7);
// //glLightfv(GL_LIGHT0, GL_POSITION, light_position);
// glRotatef(thienvuong,0.0, -0.1, 0.0);
// glTranslatef(12.5, 0.0, 0.0);
// glutSolidSphere (0.4, 20, 16);
// glutSwapBuffers();
// glPopMatrix();
// 
//  // hai vuong
// glPushMatrix(); 
// GLfloat mat_diffuse8[] = {0.0, 10.0, 10.0, 1.0};
// glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, mat_diffuse8);
// //glLightfv(GL_LIGHT0, GL_POSITION, light_position);
// glRotatef(haivuong,0.0, -0.1, 0.0);
// glTranslatef(13.0, 0.0, 0.0);
// glutSolidSphere (0.1, 20, 16);
// glutSwapBuffers();
// glPopMatrix();
// 
// 
// 
// 
// glPopMatrix();
//	
//// Sleep(83);
//  //thuy
// 	   thuy = (day + 13);
//
//
//  //kim
// 	   kim = (day + 224,7 );
//  if (thuy >= 360)
//  {
//    thuy = 0;
//  }
//  //traidat
// 	   traidat = (day + 360);
//  if (thuy >= 360)
//  {
//    thuy = 0;
//  }
//  //hoa
// 	   hoa = (day + 13);
//  if (thuy >= 360)
//  {
//    thuy = 0;
//  }
//  //moc
// 	   moc = (day + 13);
//  if (thuy >= 360)
//  {
//    thuy = 0;
//  }
//  //tho
// 	   tho = (day + 13);
//  if (tho >= 360)
//  {
//    thuy = 0;
//  }
//  //thienvuong
//  	   thienvuong = (day + 13);
//  if (thuy >= 360)
//  {
//    thuy = 0;
//  }
//  //haivuong
//  	   haivuong = (day + 13);
//  if (thuy >= 360)
//  {
//    thuy = 0;
//  }
//  
//  glutSwapBuffers();
// glFlush ();
//}
//
//
////void quay(void)
//// { 
//// Sleep(83);
////  thuy = thuy + 0.1;
////  kim = kim + 0.41;
////  traidat = traidat + 0.17;
////  hoa = hoa + 0.05;
////  moc = moc + 0.08;
////  tho = tho + 0.04;
////  thienvuong = thienvuong + 0.02;
////  haivuong = haivuong + 0.01;
////  day = (day + 10) / 360;
////  if (thuy > 360.0)
////    thuy = thuy - 360.0;
////  glutPostRedisplay();
////}
//
////void quay(void)
////{
////  aa = aa + 0.1;
////  b = b + 0.41;
////  c = c + 0.17;
////  d = d + 0.05;
////  e = e + 0.08;
////  f = f + 0.04;
////  g = g + 0.02;
////  h = h + 0.01;
////  dd = (dd + 10) / 360;
////  if (aa > 360.0)
////    aa = aa - 360.0;
//
//
////  glutPostRedisplay();
////}
// 
//void ReShape(int width, int height)
//{
//  glViewport(0, 0, width, height);
//  glMatrixMode(GL_PROJECTION);
//  glLoadIdentity();
//  float ratio = (float)width/(float)height;
//  gluPerspective(90.0, ratio, 1, 100.0);
//  glMatrixMode(GL_MODELVIEW);
//}
//
////void mouse(int button,int state, int x,int y) {
////	if(button == GLUT_LEFT_BUTTON)
////	{
////		 glutIdleFunc(quay);
////    glutPostRedisplay();
////	}
////}
//
////void keyboard(unsigned char key,int x,int y)
////{
////  switch (key)
////  {
////  case 2:
////    exit(0);
////    break;
////  case 'a':
////    glutIdleFunc(quay);
////    glutPostRedisplay();
////   	break;
////		default:
////		break;
////  }
////}
//
//int main(int argc, char** argv)
//{
// glutInit(&argc, argv);
// glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
// glutInitWindowSize (1000, 800); 
// glutInitWindowPosition (100, 100);
// glutCreateWindow (argv[0]);
// init ();
// //Init();
// glutDisplayFunc(display); 
// glutReshapeFunc(ReShape);
// //glutMouseFunc(mouse);
// //glutKeyboardFunc(keyboard);
// glutMainLoop();
// return 0;
//}


#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <math.h>
GLuint sun =0;
GLuint  thuy = 0;
GLuint  kim = 0;
GLuint  traidat = 0; 
GLuint  hoa = 0;
GLuint  moc = 0; 
GLuint  tho = 0;
GLuint  thienvuong = 0; 
GLuint  haivuong = 0; 
GLuint quay =1; 
static float quay1 = 1;
int doi = 0;
int doi1 = 0;
 
  GLfloat mat_specular[] = { 1.0, 1.0, 0.0, 0.0 };
 GLfloat mat_shininess[] = { 50.0 };
 GLfloat light_position[] = { 1.0, 0.0, 0.0, 0.0 };   // chinh huong sang (x,y,z)

 
 void cricle(float x, float y, float R)
{ // quá»¹ Ä‘áº¡o cÃ¡c chÃ²m sao
  float PI = 3.14;
  glColor3f(1.0, 1.0, 1.0);
  glBegin(GL_LINE_LOOP);
  for (int i = 0; i < 360; i++)
    glVertex3f(R * cos(2 * PI * i / 360) + x, R * sin(2 * PI * i / 360) + y, 0.0);
  // glVertex3f(R*cos(i) + x,R*sin(i) +y ,0.0);
  glEnd();
}
 
// void init(void) 
//{
// //
// glClearColor (0.0, 0.0, 0.0, 0.0);
// glShadeModel (GL_SMOOTH);
// glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
// glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
// glLightfv(GL_LIGHT0, GL_POSITION, light_position);
// glEnable(GL_LIGHTING);
// glEnable(GL_LIGHT0);
// glEnable(GL_DEPTH_TEST);
//}

void RendenScene()
{
 
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
  
  glLoadIdentity();
  
   if (doi == 0)
  {
	gluLookAt(15.0, 20.0, 0.0, 5.0, 5.0, 0.0, 0.0, 10.0, 10.0);
	  glPushMatrix();
    glRotated(90, 1, 0, 0);
    cricle(0, 0, 2.5);  // sao thuy
    cricle(0, 0,3.5);  // sao kim
    cricle(0, 0, 5.5); // trai dat
    cricle(0, 0, 7.7);  // sao hoa
    cricle(0, 0, 8.5);  // sao tho
    cricle(0, 0, 10.5); // sao moc
    cricle(0, 0, 12.5); // sao thien vuong
    cricle(0, 0, 13.0);  // sao hai vuong
    
    glPopMatrix();
  }
 
  glColor3f(1.0, 1.0, 1.0);
  glScalef(1, 1, 1);

 if (doi == 1)
  {
    gluLookAt(5.0, 4.0, 30.0, 0.0, -1.0, 0.0, 0.0, 10.0, 0.0);
    glPushMatrix();
    glRotated(90, 1, 0, 0);
    cricle(0, 0, 2.5);  // sao thuy
    cricle(0, 0,3.5);  // sao kim
    cricle(0, 0, 5.5); // trai dat
    cricle(0, 0, 7.7);  // sao hoa
    cricle(0, 0, 8.5);  // sao tho
    cricle(0, 0, 10.5); // sao moc
    cricle(0, 0, 12.5); // sao thien vuong
    cricle(0, 0, 13.0);  // sao hai vuong
    
    glPopMatrix();
}
 
 //  sun
 glPushMatrix(); 
  GLfloat mat_ambien[] = {1.0, 0.0, 0.0f, 0.0f};
  GLfloat mat_diffuse[] = {1.0, 1.0, 0.0, 1.0};
 glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
  glLightfv(GL_LIGHT0, GL_POSITION, light_position);
 glTranslatef(0.0, 0.0, 0.0);
 glRotatef((float)thuy,0.0, 1.0, 0.0);
 glutSolidSphere (2.0, 20, 16);
 glutSwapBuffers();
 glPopMatrix();
 
 // thuy
 glPushMatrix(); 	
  GLfloat mat_ambien1[] = {0.0, 0.0, 1.0f, 1.0f};
 GLfloat mat_diffuse1[] = {0.0, 1.0, 4.0, 0.0}; 								
 glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, mat_diffuse1);     
 //glLightfv(GL_LIGHT0, GL_POSITION, light_position);
 glRotatef(thuy,0.0, -0.1, 0.0);        // pphep quay: toa do quay glRotatef(goc quay,x,y,z) 
 glTranslatef(2.5, 0.0, 0.0); 			 /// phep tinh tien: khoang cach voi sun 
 glRotatef(thuy,0.0, 1.0, 0.0);
 glutSolidSphere (0.3, 20, 16);           // tao hinh tron    //Bán kính trung bình 2.439,7 ± 1,0 km[
 glutSwapBuffers();
 glPopMatrix();
 
 // kim
 glPushMatrix(); 
 GLfloat mat_ambien2[] = {0.0, 0.0, 1.0f, 1.0f};
 GLfloat mat_diffuse2[] = {1.0,0.0,2.0, 1.0};
 glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, mat_diffuse2);
 //glLightfv(GL_LIGHT0, GL_POSITION, light_position);
 glRotatef(kim,0.0, -0.1, 0.0);
 glTranslatef(3.5, 0.0, 0.0);
 glRotatef(thuy,0.0, 1.0, 0.0);
 glutSolidSphere (0.4, 20, 16);							//Bán kính trung bình 6.051,8 ± 1,0 km
 glutSwapBuffers();
 glPopMatrix();
 
   // trai dat
 glPushMatrix(); 
 GLfloat mat_diffuse3[] = {0.0,0.0,2.0, 6.0}; 
 glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, mat_diffuse3);
 //glLightfv(GL_LIGHT0, GL_POSITION, light_position);
 glRotatef(traidat,0.0, -0.1, 0.0); 
 glTranslatef(5.5, 0.0, 0.0);
 glRotatef(thuy,0.0, 1.0, 0.0);
 glutSolidSphere (0.7, 20, 16);					//12742,02 km.[3]
 glutSwapBuffers();
 glPopMatrix();
 
  // hoa
 glPushMatrix(); 
 GLfloat mat_diffuse4[] = {1.0, 0.0, 0.0, 0.3};
 glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, mat_diffuse4);
 //glLightfv(GL_LIGHT0, GL_POSITION, light_position);
 glRotatef(hoa,0.0, -0.1, 0.0);
 glTranslatef(7.7, 0.0, 0.0);
 glRotatef(thuy,0.0, 1.0, 0.0);
 glutSolidSphere (0.5, 20, 16);					//3389,5 ± 0,2 km
 glutSwapBuffers();
 glPopMatrix();
 
 // sao moc 
 glPushMatrix(); 	
 GLfloat mat_diffuse5[] = {2.0, 0.0, 1.0, 1.0}; 								
 glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, mat_diffuse5);
 //glLightfv(GL_LIGHT0, GL_POSITION, light_position);
 glRotatef(moc,0.0, -0.1, 0.0);        // pphep quay: toa do quay glRotatef(goc quay,x,y,z) 
 glTranslatef(8.5, 0.0, 0.0); 			 /// phep tinh tien: khoang cach voi sun 
 glRotatef(thuy,0.0, 1.0, 0.0);
 glutSolidSphere (0.3, 20, 16);           //  bình 69.911 ± 6 km[6][7]   lon nhat'
 glutSwapBuffers();
 glPopMatrix();
 
   // tho
 glPushMatrix(); 
 GLfloat mat_diffuse6[] = {2.0, 2.0, 1.0, 1.0};
 glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, mat_diffuse6);
 //glLightfv(GL_LIGHT0, GL_POSITION, light_position);
 glRotatef(tho,0.0, -0.1, 0.0);
 glTranslatef(10.5, 0.0, 0.0);
 glRotatef(thuy,0.0, 1.0, 0.0);
 glutSolidSphere (1.2, 20, 16);					//60.268 ± 4 km[6][7] 9,4492 Trái Ð?t  lon thu 2
 glutSwapBuffers();
 glPopMatrix();
 
  // thien vuong
 glPushMatrix(); 
 GLfloat mat_diffuse7[] = {20.0, 10.0, 10.0, 1.0};
 glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, mat_diffuse7);
 //glLightfv(GL_LIGHT0, GL_POSITION, light_position);
 glRotatef(thienvuong,0.0, -0.1, 0.0);
 glTranslatef(12.5, 0.0, 0.0);
 glRotatef(thuy,0.0, 1.0, 0.0);
 glutSolidSphere (0.4, 20, 16);              //25.559 ± 4 km   lon thu 3
 glutSwapBuffers();
 glPopMatrix();
 
 //  // hai vuong
 glPushMatrix(); 
 GLfloat mat_diffuse8[] = {0.0, 10.0, 10.0, 1.0};
 glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, mat_diffuse8);
 //glLightfv(GL_LIGHT0, GL_POSITION, light_position);
 glRotatef(haivuong,0.0, -0.1, 0.0);
 glTranslatef(13.0, 0.0, 0.0);
 glRotatef(thuy,0.0, 1.0, 0.0);
 glutSolidSphere (0.1, 20, 16);				// 24.764 ± 15 km[8][9] 3,883 Trái Ð?t lon thu 4
 glutSwapBuffers();
 glPopMatrix();
 
  glPopMatrix();
 
  Sleep(83);
  thuy = (thuy + quay + 47/10) ;   //47,87 km/s[1]
  if (thuy >= 360)
  {
    thuy = 0;
  }
 
   kim = (kim + quay +35/10);    //35,02 km/s
  if (kim >= 360)
  {
    kim = 0;
  }
 
  sun = (sun + 1);
  if (sun >= 360)
  {
    sun = 0;
  }
  
    traidat = (traidat + quay + 29/10);   //29,783 km/s.
  if (traidat >= 360)
  {
    traidat = 0;
  }
//  
    hoa = (hoa + quay + 24/10);  //24,007 km/s
  if (hoa >= 360)
  {
    hoa = 0;
  }
  
    moc = (moc + quay + 13/10 );   //13,07 km/s[2]
  if (moc >= 360) 
  {
    moc = 0;
  }
//  
    tho = (tho + quay + 9/10);   //9,69 km/s[
  if (tho >= 360)
  {
    tho = 0;
  }
 
     thienvuong = (thienvuong + quay + 6/10);  //6,81 km/s[2]
  if (thienvuong >= 360)
  {
    thienvuong = 0;
  }
 
     haivuong = (haivuong + quay + 5/10);   //5,43 km/s[4]
  if (haivuong >= 360)
  {
    haivuong = 0;
  }
 
  glutSwapBuffers();
  glFlush();
 
  glutPostRedisplay();
}
 
void ReShape(int width, int height)
{
  glViewport(0, 0, width, height);
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  float ratio = (float)width/(float)height;
  gluPerspective(50.0, ratio, 1, 100.0);    // 30 
  glMatrixMode(GL_MODELVIEW);
}
 
 
void Init()
{
  glClearColor(0.0, 0.0, 0.0, 0.0);
  glEnable(GL_DEPTH_TEST);
 
  glEnable(GL_LIGHTING);
  glEnable(GL_LIGHT0);
 
  GLfloat light_pos [] = {1.0, 1.0, 1.0, 0.0};
  glLightfv(GL_LIGHT0, GL_POSITION, light_pos);
 
  GLfloat ambient[] = {1.0, 1.0, 0.0, 1.0};
  glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, ambient);
 
  GLfloat diff_use[] = {0.5, 0.5, 0.0, 1.0};
  glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, diff_use);
 
  GLfloat specular[] = {1.0, 1.0, 1.0, 1.0};
  glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, specular);
 
  GLfloat shininess = 50.0f;
  glMateriali(GL_FRONT, GL_SHININESS, shininess);
}
 
 void keyboard(unsigned char key,int x,int y)

{
	switch(key) {
		case '1':
    doi = 0;
    glutPostRedisplay();
    break;
    	case '2':
    doi = 1;
    glutPostRedisplay();
    break;
	}
}
 
int main(int argc, char** argv)
{
 glutInit(&argc, argv);
 glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
 glutInitWindowSize (1000, 800); 
 glutInitWindowPosition (100, 100);
 glutCreateWindow (argv[0]);
 
  Init();
  glutReshapeFunc(ReShape);
  glutDisplayFunc(RendenScene);
  glutKeyboardFunc(keyboard);
  glutMainLoop();
 
}
