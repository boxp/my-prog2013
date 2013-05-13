#include <stdio.h>
double f(double);
int main(void){
  printf("f(4.0)=%f\n", f(4.0));
  printf("f(0.0)=%f\n", f(0.0));
  printf("f(-4.0)=%f\n", f(-4.0));
}
double f(double x){
  return 2.0 * x * x + 3.0 * x - 5.0;
}
