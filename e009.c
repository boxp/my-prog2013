#include <stdio.h>
int main(void){
  double num[10];
  double max;
  int i;
  for (i = 0; i < 10; i++) {
    scanf("%lf",&num[i]);
  }
  max = num[0];
  for (i = 1; i < 10; i++) {
    if(max < num[i])
      max = num[i];
  } 
  printf("%f\n", max);
  return 0;
}
