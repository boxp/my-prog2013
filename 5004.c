#include <stdio.h>
int main(void){
  int i; 
  static int iii;
  printf("%p\n", &i);
  printf("%p\n", &iii);
  return 0;
}
