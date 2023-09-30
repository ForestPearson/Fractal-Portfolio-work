/*
#Forest Pearson
#Fractals course
#06/14/2023
*/
#include  "FPToolkit.c"
#include <stdio.h>
#include <math.h>
#include <complex.h>
#include <tgmath.h>
#define MAX_SIZE 1000000

typedef struct {
  char nonterminal;
  char rule[100];
} Production;

typedef struct {//Struct to track states
  double x[MAX_SIZE];
  double y[MAX_SIZE];
  double d[MAX_SIZE]; //Direction of turtle
  int xI;
  int yI;
  int aI;
} Stack;

Stack stack;
Production prods[10];
char axiom[2] = {'A', '\0'};
char derivation[MAX_SIZE] = {'\0'};
double direction = 0;
double cur[2];

void push() {
  if (stack.xI < MAX_SIZE-1) {
    stack.xI += 1;
    stack.x[stack.xI] = cur[0];
  }
  if (stack.yI < MAX_SIZE-1) {
    stack.yI += 1;
    stack.y[stack.yI] = cur[1];
  }
  if (stack.aI < MAX_SIZE-1) {
    stack.aI += 1;
    stack.d[stack.aI] = direction;
  }
}

void pop() {
  if (stack.xI >=0) {
    cur[0] = stack.x[stack.xI];
    stack.xI -=1;
  }
  if (stack.yI >= 0) {
    cur[1] = stack.y[stack.yI];
    stack.yI -= 1;
  }
  if (stack.aI >= 0) {
    direction = stack.d[stack.aI];
    stack.aI -= 1;
  }
}

void autoFit(int swidth, int sheight, double angle, double mainAngle, double * idealPosition) {
  double xMin=0; double yMin=0;
  double xMax=0; double yMax=0;
  double dX=0; double dY=0;
  double tempX = 0.9*swidth;
  double tempY = 0.9*sheight;
  double next[2];

  int i = 0;
  direction = mainAngle;
  cur[0] = 0;
  cur[1] = 0;

  while (derivation[i] != '\0') {
    if (derivation[i] == '[') {
      push();
    }
    else if (derivation[i] == ']') {
      pop();
    }
    else if (derivation[i] == '-') {
      direction -= angle;
    }
    else if (derivation[i] == '+') {
      direction += angle;
    }
    else if ((derivation[i] >= 'A' && derivation[i] <='Z') || derivation[i] == 'f') {
      next[0] = cur[0] + cos(direction);
      next[1] = cur[1] + sin(direction);
      cur[0] = next[0];
      cur[1] = next[1];

      if (cur[0] < xMin) xMin = cur[0];//Builds outer parameters while comparing
      if (cur[0] > xMax) xMax = cur[0];
      if (cur[1] < yMin) yMin = cur[1];
      if (cur[1] > yMax) yMax = cur[1];
    }
    i++;
  }
  dX = xMax - xMin;//Create the bounding square
  dY = yMax - yMin;
  if (dY > dX) {
    tempX = dX * (tempY / dY);
  }
  else {
    tempY = dY * (tempX / dX);
  }
  idealPosition[0] = 0.5 * (swidth - tempX);
  if (xMin < 0) idealPosition[0] -= (xMin * (tempX/dX));
  idealPosition[1] = 0.5 * (sheight - tempY);
  if (yMin < 0) idealPosition[1] -= (yMin * (tempY/dY));
  idealPosition[2] = tempX / dX;
}

void stringInterpreter(int pos[2], double length, double angle, double mainAngle) {
  direction = mainAngle;
  cur[0] = pos[0];
  cur[1] = pos[1];
  double next[2];
  int i = 0;

  while (derivation[i] != '\0') {//Loop through the instructions without the need to determine bounds.
    if (derivation[i] == '[') {
      push();
    }
    else if (derivation[i] == ']') {
      pop();
    }
    else if (derivation[i] == '-') {
      direction -= angle;
    }
    else if (derivation[i] == '+') {
      direction += angle;
    }
    else if ((derivation[i] >= 'A' && derivation[i] <='Z')|| derivation[i] == 'f') {
      next[0] = cur[0] + length * cos(direction);
      next[1] = cur[1] + length * sin(direction);
      G_line(cur[0], cur[1], next[0], next[1]);
      cur[0] = next[0];
      cur[1] = next[1];
    }
    i++;
  }
}

void stringBuilder(int curr, int max) {
  if (derivation[0] == '\0') {
    strcpy(derivation, axiom);
  }
  if (curr == max){//Retrun condition for recursion
    return;
  }

  int rule=0;
  char cur[2];  cur[1] = '\0';
  char temp[MAX_SIZE];
  int i = 0;
  int j = 0;
  while (derivation[i] != '\0') {
    cur[0] = derivation[i];
    while (j < 2 && rule == 0) {//Checks rules
      if (derivation[i] == prods[j].nonterminal) {
        strcat(temp, prods[j].rule);
        rule = 1;
      }
      j++;
    }
    if (rule == 0) strcat(temp, cur);
    i++;
    j = 0;
    rule = 0;
  }
  strcpy(derivation, temp);
  stringBuilder(curr+1, max);//Next process of the rule upon itself
}

int main() {
  double length;
  int swidth = 800; int sheight = 800;
  G_init_graphics (swidth,sheight);

  G_rgb(0.039, 0.125, 0.352);//Generate the moon, ground, and stars.
  G_clear();
  G_rgb(255/255.0,237/255.0,188/255.0);
  G_fill_circle(swidth/4, sheight-sheight/6, 50);
  for(int i= 0; i < 1000; i++){
    G_point(rand()%swidth, rand()%sheight);
  }
  G_rgb(63/255.0,49/255.0,81/255.0);
  G_fill_circle (swidth/2, -825, 1000);

  //build the string and populate it
  prods[0].nonterminal = 'A';
  strcpy(prods[0].rule, "B-[[A]+A]+B[+BA]-A");
  prods[1].nonterminal = 'B';
  strcpy(prods[1].rule, "BB");
  stringBuilder(0, 7);
  stack.x[0] = '\0';
  stack.y[0] = '\0';
  stack.d[0] = '\0';
  stack.xI = -1;
  stack.yI = -1;
  stack.aI = -1;

  int pos[2];
  double idealPosition[3];
  double mainAngle = M_PI/ 2.0; //Vertical
  autoFit(swidth, sheight, M_PI/6.0, mainAngle, idealPosition);//Determines Ideal position for demensions/placement
  pos[0] = idealPosition[0];
  pos[1] = idealPosition[1];
  length = idealPosition[2];

  G_rgb(0.15, 0.35, 0.01);//Draws the fern based upon ideal parameters.
  stringInterpreter(pos, length, M_PI/6.0, mainAngle);

  int key;
  key = G_wait_key();
  //Save to file
  G_save_to_bmp_file("lSysPortfolio.bmp");

  return 0;
}