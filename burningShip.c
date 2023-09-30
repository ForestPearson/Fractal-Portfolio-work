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

//burningShip variables
int reps = 50;
double cx,cy ;
complex c, z;
double sr, sg, sb ;
double er, eg, eb ;
double red, g, blue ;

//point coordinates
double p[2];

void burningShip() {
  sr = 0.0 ;  sg = 0.0 ;  sb = 0.0 ;
  er = 1.0 ;  eg = 0.31 ;  eb = 0.0 ;
  // iterate through each pixel of window
  for (int x = 0; x < swidth/2; x++){
    for (int y = 0; y < sheight; y++) {
      // map to coordinating complex number
      cx = 2*((x-(swidth/4.0))/(swidth/4.0)) ;
      cy = 2*((y-(sheight/2.0))/(sheight/2.0)) ;
      c = cx + cy*I ;
      z = 0;
      int k = 0;

      for(k = 0; k < reps; k++){
        z = (cabs(creal(z))+cabs(cimag(z))*I)*(cabs(creal(z))+cabs(cimag(z))*I)+c;
        if(cabs(z) > 2.0){
          break;
        }
      }
      double sf = 1.0*k/reps;
      sf = pow(sf,0.5);
      red = sr + sf*(er-sr);  
      g = sg + sf*(eg-sg);  
      blue = sb + sf*(eb-sb);
      G_rgb(red,g,blue);
      G_point(x+(swidth/2),sheight-y);
      //G_point(x+(swidth/2),y);
    }
  }
}
void zoom(double zoom, double a, double b){
  double xmin = a - zoom;
  double xmax = a + zoom;
  double ymin = b - zoom;
  double ymax = b + zoom;
  double dx = (xmax - xmin) / (swidth/2.0);
  double dy = (ymax-ymin) / (sheight);
  int x, y;
  for(x = 0; x < (swidth/2.0); x++){
    for(y = 0; y < sheight; y++){
      double real = xmin + x * dx;
      double imag = ymin + y * dy;
      c = real + imag * I;
      z = 0;
      int k = 0;
      for(k = 0; k < reps; k++){
        z = (cabs(creal(z))+cabs(cimag(z))*I)*(cabs(creal(z))+cabs(cimag(z))*I)+c;
        if(cabs(z) > 2.0){
          break;
        }
      }
      double sf = 1.0*k/reps;
      sf = pow(sf,0.5);
      red = sr + sf*(er-sr);  
      g = sg + sf*(eg-sg);  
      blue = sb + sf*(eb-sb);
      G_rgb(red,g,blue);
      G_point(x,sheight-y); 
    }
  }
}
int main(){
    G_init_graphics (swidth,sheight) ;
    G_rgb(1,1,1);
    G_clear();  
    burningShip();
    zoom(1.0,0,0);
    int key;
    double zoomLevel = 0.1;
    p[0] = 900.00;
    p[1] = 284.00;
    G_rgb(1,1,1);
    G_draw_string("Q = Quit", swidth-100, sheight-15);
    G_draw_string("Space = Select", swidth-100, sheight-30);
    G_draw_string("Up = +Zoom", swidth-100, sheight-45);
    G_draw_string("Down = -Zoom", swidth-100, sheight-60);
    char str[100];
    while(1){
        G_draw_string("Q = Quit", swidth-100, sheight-15);
        G_draw_string("Space = Select", swidth-100, sheight-30);
        G_draw_string("Up = +Zoom", swidth-100, sheight-45);
        G_draw_string("Down = -Zoom", swidth-100, sheight-60);
        key =  G_wait_key();
        if(key == 65362){
          zoomLevel = zoomLevel + zoomLevel*0.1;
        }
        if(key == 65364){
          zoomLevel = zoomLevel - zoomLevel*0.1;
        }
        if(key == 32){
          G_wait_click(p);
        }
        if(key == 113){
          break;
        }
        G_rgb(1,1,1);
        G_clear();
        burningShip();
        G_rgb(1,1,1);
        G_fill_circle(p[0],p[1],3);
        double mx = 2*(((p[0]-(swidth/2))-(swidth/4.0))/(swidth/4.0));
        double my = 2*(((sheight-p[1])-(sheight/2.0))/(sheight/2.0));
        zoom(zoomLevel, mx, my);
        G_rgb(1,1,1);
        sprintf(str, "%f", mx);
        G_draw_string("X:", swidth-90,45);
        G_draw_string(str, swidth-75,45);
        sprintf(str, "%f", my);
        G_draw_string("Y:", swidth-90,30);
        G_draw_string(str, swidth-75,30);

    }
  // save file
	G_save_to_bmp_file("ShipPortfolio.bmp") ;

}