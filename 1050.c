#include <stdio.h>
#include <math.h>
int main(void){
  float x,y;
  scanf("%f%f",&x,&y);
  printf("%f\n",hypot(x,y));
  return 0;
}
