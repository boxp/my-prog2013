#include <stdio.h>
int main(void){
  int a[3];
  printf("%p\n", a);
  printf("%p\n", &a[0]);
  return 0;
}
