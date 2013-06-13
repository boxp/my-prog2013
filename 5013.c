#include <stdio.h>
int main(void){
  int a = 5; 
  int *ap = &a;
  printf("%d\n", *ap);
  *ap = 10;
  printf("%d\n", a);
  return 0;
}
