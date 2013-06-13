#include <stdio.h>
int main(void){
  int a = 5;  
  int *ap;
  ap = &a;
  printf("%d\n", *ap);
  *ap = 10;
  printf("%d\n", *ap);
  return 0;
}
