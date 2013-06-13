#include <stdio.h>
int main(void){
  float a; 
  float *pa;
  pa = &a;
  scanf("%f",pa);
  printf("%f\n", *pa);
  return 0;
}
