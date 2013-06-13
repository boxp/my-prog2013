#include <stdio.h>
int main(void){
  int a[5];
  int i;
  int *p;
  p =  &a[0];
  for (i = 0; i < 5; i++) {
    scanf("%d",&a[i]);
  }
  p = &a[0];
  printf("%d\n", *p);
  return 0;
}
