#include <stdio.h>
#include <limits.h>
#define BIG 1000
int main(void){
  int i,min,max;
  int n;
  printf("Intput n : ");
  scanf("%d",&n);
  int x[BIG]; 
  for (i = 0; i < n; i++) {
    scanf("%d",&x[i]);
  }
  min = x[0];
  max = x[0];
  for (i = 1; i < n; i++) {
    if (min > x[i]) {
      min = x[i];
    }
    if (max < x[i]) {
      max = x[i];
    }
  }
  printf("max : %d\n", max);
  printf("min : %d\n", min);
  return 0;
}
