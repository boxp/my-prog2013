#include <stdio.h>
int main(void){
  int a[20]; 
  int x;
  int i;
  int count = 0;
  for (i = 0; i < 20; i++) {
    printf("input a[%d] :\n", i);
    scanf("%d",&a[i]);
  }
  printf("Input x\n");
  scanf("%d",&x);
  for (i = 0; i < 20; i++) {
    if (a[i] <= x) 
      count++;
  }
  printf("%d\n", count);
  return 0;
}
