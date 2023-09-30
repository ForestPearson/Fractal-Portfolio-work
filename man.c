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

const int swidth = 1200;
const int sheight = 600;

//mandelbrot variables
int reps = 50;
double cx,cy ;
complex c, z;
double sr, sg, sb ;
double er, eg, eb ;
double red, g, blue ;

//point coordinates
double p[2];

void mandelbrot() {
  sr = 0.0 ;  sg = 0.0 ;  sb = 0.0 ;
  er = 0.0 ;  eg = 0.0 ;  eb = 1.0 ;
  // iterate through each pixel of window
  for (int x = 0; x < swidth/2; x++){
    for (int y = 0; y < sheight; y++) {

      // map to coordinating complex number
      cx = 2*((x-(swidth/4.0))/(swidth/4.0)) ;
      cy = 2*((y-(sheight/2.0))/(sheight/2.0)) ;
      c = cx + cy*I ;
      z = 0;
      int k ;
      for (k = 0 ; k < reps ; k++) {
        z = z*z + c ;
        if (cabs(z) > 2) { // diverged
          break; 
        }    
      }
      double sf = 1.0*k/reps;
      sf = pow(sf,0.5);
      red = sr + sf*(er-sr);  
      g = sg + sf*(eg-sg);  
      blue = sb + sf*(eb-sb);
      G_rgb(red,g,blue);
      G_point(x+(swidth/2),y);
    }
  }
}

int juliaRecursive(float x, float y, int r, int depth, int max, double complex c, double complex z){
    double sf = 1.0 - ((((max-depth)*(max-depth))%(max*max))/255);
    sf = pow(sf,0.3);
    if (cabs(z) > 2) {
        depth = 0;
    }
    if (sqrt(pow((x - (swidth / 2) / 2), 2) + pow((y - sheight / 2), 2)) > sheight / 2) {//Creates encompasing circle
        G_rgb(0,0,0);
        G_point(x,y);
    }
    if (depth < max / 4) {
        double test = 1.0*depth/max;
        test = pow(test, 0.3);
        blue = sb + test*(eb-sb);
        G_rgb(0,0,blue);
        G_point(x,y);
        return 0;
    }
    juliaRecursive(x, y, r, depth - 1, max, c, cpow(z, 2) + c);
}
void juliaset(int depth, int r){
    for (float x = (((swidth / 2) / 2)) - sheight / 2; x < (((swidth / 2) / 2)) + sheight / 2; x += 1) {
        for (float y = 0; y < sheight; y += 1) {
            juliaRecursive(x, y, r, depth, depth, c, (2 * r * ((x - (swidth/ 2) / 2)) / sheight) + (2 * r * (y - sheight / 2) / sheight) * I);
        }
    }
}
int main(){
    G_init_graphics (swidth,sheight) ;
    G_rgb(1,1,1);
    G_clear();
    mandelbrot();
    c = -0.766667 + 0.100000*I;
    juliaset(100,2);
    int key;
    G_rgb(1,1,1);
    G_draw_string("Q = Quit", swidth-100, sheight-15);
    G_draw_string("Space = Select", swidth-100, sheight-30);
    while(1){
        G_rgb(1,1,1);
        G_draw_string("Q = Quit", swidth-100, sheight-15);
        G_draw_string("Space = Select", swidth-100, sheight-30);
        key = G_wait_key();
        if(key == 113){
          break;
        }
        G_wait_click(p);
        G_rgb(1,1,1);
        G_clear();
        mandelbrot();
        G_rgb(1,1,1);
        G_fill_circle(p[0],p[1],3);
        double mx = 2*(((p[0]-(swidth/2))-(swidth/4.0))/(swidth/4.0));
        double my = 2*((p[1]-(sheight/2.0))/(sheight/2.0));
        c = mx + my*I;
        printf("'X, '%f\n", mx);
        printf("'Y, '%f\n", my);
        G_rgb(1,1,1);
        juliaset(100, 2);
    }
  //Save file
	G_save_to_bmp_file("MandelPortfolio.bmp") ;

}