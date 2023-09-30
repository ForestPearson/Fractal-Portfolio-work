/*
#Forest Pearson
#Fractals course
#06/14/2023
*/
#include "FPToolkit.c"
#include <stdio.h>
#include <math.h>
#include <complex.h>
#include <tgmath.h>

int n ;
double current[2];
double square[2];
int swidth, sheight;
double lowlefthirdCornerX, lowlefthirdCornerY, width, height;

void scale(double x, double y){
  current[0] *= x;
  current[1] *= y;
}
void translate(double x, double y){
  current[0] += x;
  current[1] += y;
}
void rotate (double angle) {
	double temp ;
	double radians = angle*M_PI/180.0 ;
	temp = current[0]*cos(radians) - current[1]*sin(radians) ;
	current[1] = current[0]*sin(radians) + current[1]*cos(radians) ;
	current[0] = temp ;
}

void initials(){
  double k;
  double height = 4;
  double width = 10;
  double widthScale = swidth/width;
  double heightScale = sheight/height;
  const double s = 50.0;
  for(int i = 0; i < 1000000; i++){
    k = rand() % 9;
    //G_rgb((190.0/255.0), (59.0/255.0), (255.0/255.0));
    G_rgb((255.0/255.0), (184.0/255.0), (0.0/255.0));
    if(k == 0){
      G_rgb((50.0/255.0), (122.0/255.0), (255.0/255.0));
      scale((double)1/9,(double)3/7);
      translate((double)1/9,(double)1/7);

    }
    else if(k == 1){
      //G_rgb((51.0/255.0), (255.0/255.0), (138.0/255.0));
      G_rgb((0.0/255.0), (0.0/255.0), (0.0/255.0));
      scale((double)1/9,(double)3/7);
      translate((double)1/9,(double)3/7);
    }
    else if(k == 2){
      scale((double)2/9,(double)1/7);
      translate((double)2/9,(double)5/7);
    }
    else if(k == 3){
      scale((double)2/9,(double)1/7);
      translate((double)2/9,(double)3/7);
    }
    else if(k == 4){
      G_rgb((50.0/255.0), (122.0/255.0), (255.0/255.0));
      scale((double)1/9,(double)3/7);
      translate((double)5/9,(double)1/7);
    }
    else if(k == 5){
      G_rgb((0.0/255.0), (0.0/255.0), (0.0/255.0));
      scale((double)1/9,(double)3/7);
      translate((double)5/9,(double)3/7);
    }
    else if(k == 6){
      scale((double)1/9,(double)1/7);
      translate((double)6/9,(double)5/7);
    }
    else if(k == 7){
      //G_rgb((255.0/255.0), (114.0/255.0), (118.0/255.0));
      G_rgb((216.0/255.0), (115.0/255.0), (0.0/255.0));
      scale((double)1/9,(double)3/7);
      translate((double)7/9,(double)3/7);
    }
    else if(k == 8){
      scale((double)1/9,(double)1/7);
      translate((double)6/9,(double)3/7);
    }
    G_fill_circle (swidth*current[0], sheight*current[1], .10);
  }
  return;
}
int main() {
  swidth = 1200;
  sheight = 800;
  G_init_graphics(swidth, sheight);


  //G_rgb((196.0/255.0), (221.0/255.0), (226.0/255.0));
  G_rgb((0.0/255.0), (51.0/255.0), (102.0/255.0));
  G_clear();
  G_rgb((255.0/255.0), (215.0/255.0), (0.0/255.0));
  G_fill_rectangle(0,0, 20, 800);
  G_fill_rectangle(1180,0, 20, 800);
  G_fill_rectangle(20,0,1300,20);
  G_fill_rectangle(0,780,1300,20);
  G_rgb(1.0, 1.0, 1.0);
  G_rgb(0.0, 0.0, 0.0);

  double pi = 3.14159265;
  double radian = pi /180.0;
  srand(time(NULL));
  double n = rand() / ((double) RAND_MAX);

  current[0] = swidth;
  current[1] = sheight;
  current[0] = n;
  current[1] = n;
  current[0] = 0.0;
  current[1] = 0.0;
  G_fill_circle (current[0] * swidth, current[1] * sheight, 1);

  initials();

  int wait;
  wait = G_wait_key();
  G_save_to_bmp_file("IFSPortfolio.bmp");
}

