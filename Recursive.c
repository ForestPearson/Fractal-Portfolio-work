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

#include  "FPToolkit.c"



void koch(double pOne[], double pTwo[], int curr, int dep) {
  double a[2], b[2], c[2], t[2];
  if (curr == dep){
    return;
  }

  a[0] = pOne[0] + (1.0/3.0) * (pTwo[0] - pOne[0]);//Determine a,t,b and c
  a[1] = pOne[1] + (1.0/3.0) * (pTwo[1] - pOne[1]);
  t[0] = a[0] - pOne[0];
  t[1] = a[1] - pOne[1];
  b[0] = a[0] + t[0] * cos(M_PI / 3.0) - t[1] * sin(M_PI / 3.0);
  b[1] = a[1] + t[1] * cos(M_PI / 3.0) + t[0] * sin(M_PI / 3.0);
  c[0] = pOne[0] + (2.0/3.0) * (pTwo[0] - pOne[0]);
  c[1] = pOne[1] + (2.0/3.0) * (pTwo[1] - pOne[1]);
  G_line(pOne[0], pOne[1], pTwo[0], pTwo[1]);
  G_fill_triangle(a[0], a[1], b[0], b[1], c[0], c[1]);

  koch(pOne, a, curr+1, dep);//Loop for angles
  koch(a, b, curr+1, dep);
  koch(b, c, curr+1, dep);
  koch(c, pTwo, curr+1, dep);
}
void snowFlake(double pOne[], double pTwo[], int depth) {
  double p3[2];//Determine p3 for the 2nd and third curves
  p3[0] = pOne[0] + (pTwo[0]-pOne[0]) * cos(-M_PI / 3.0) - (pTwo[1]-pOne[1]) * sin(-M_PI / 3.0);
  p3[1] = pOne[1] + (pTwo[1]-pOne[1]) * cos(-M_PI / 3.0) + (pTwo[0]-pOne[0]) * sin(-M_PI / 3.0);
  
  koch(pOne, pTwo, 0, depth);//Call the three parts to create the snowflake out of koch curves
  koch(pTwo, p3, 0, depth);
  koch(p3, pOne, 0, depth);
  G_fill_triangle(pOne[0], pOne[1], pTwo[0], pTwo[1], p3[0], p3[1]);
}

int main() {
  int swidth = 800; int sheight = 800;
  double pOne[2], pTwo[2], p3[2];
  G_init_graphics (swidth,sheight);

  G_rgb(0.039, 0.125, 0.352);
  G_clear();
  for(int i = 0; i < sheight; i++){
    for(int j = 0; j < swidth; j++){
      double gradient = (double)i/sheight;
      G_rgb(0.039*gradient, 0.125*gradient, 0.352*gradient);
      G_pixel(j,i);
    }
  }
  G_rgb(1,1,1);
  for (int i=0; i<100; ++i) {//White snowflake generation
    pOne[0] = rand() % (swidth);//Declared here to use twice.
    pOne[1] = rand() % (sheight);
    pTwo[0] = (pOne[0]) + (i%20)*cos(rand());
    pTwo[1] = (pOne[1]) + (i%20)*sin(rand());
    snowFlake(pOne, pTwo, 5);
  }
  int key;
  key = G_wait_key();
  //Save to file
  G_save_to_bmp_file("RecursivePortfolio.bmp");
  return 0;
}


