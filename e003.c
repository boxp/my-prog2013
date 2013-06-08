#include <stdio.h>
#include <math.h>
double sum(double);
int main(void){
  double i;
  for (i = 0; i < 10; i++) {
    printf("%f\n", sum(i));
  }
}
double sum(double n){
  static double x = 0.0;
  x += fabs(n);
  return x;
}
