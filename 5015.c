#include <stdio.h>
int main(void){
  int a; 
  int *p;
  p = &a;
  scanf("%d", p);
  printf("%d\n", a);
  return 0;
}
