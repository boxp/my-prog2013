#include <stdio.h>
#include <math.h>
int main(void){
  float x,y;
  scanf("%f%f",&x,&y);
  printf("%f\n", powf(x,2)+powf(y,2));
    return 0;
}
