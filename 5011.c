#include <stdio.h>
int main(void){
  int x = 5, *p;
  p = &x;
  printf("%d\n", *p);
  return 0;
}
