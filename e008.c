#include <stdio.h>
#include <math.h>
double dist(double,double,double,double);
int main(void){
  printf("%f\n", dist(2.0,5.0,9.0,4.0));
  return 0;
}

double dist(double x1,double y1,double x2,double y2){
  return hypot((x2 - x1) , (y2 - y1));
}
