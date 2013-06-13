#include <stdio.h>
int main(void){
  int x,y;
  int *a,*b; 
  a = &x;
  b = &y;
  scanf("%d", a);
  scanf("%d", b);
  printf("%d\n", *a + *b);
  printf("%d\n", *a * *b);
  return 0;
}

