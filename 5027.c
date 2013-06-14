#include <stdio.h>
#include <math.h>
void volume(double,double,double*);
int main(void){
  double r,h,core;
  double *p;
  p = &core;
  do {
    scanf("%lf",&r);
    scanf("%lf",&h);
  } while (r < 0.0 || h < 0.0);
  volume(r,h,p);
  printf("%f\n", core);
  return 0;
}

void volume(double r,double h,double *p){
  *p = r * r * h * M_PI;
}
