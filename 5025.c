#include <stdio.h>
int main(void){
  int a, b; 
  int *p;
  p = &a;
  scanf("%d",&a);
  b = *p;
  printf("%d\n", b);
  return 0;
}
