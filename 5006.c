#include <stdio.h>
int main(void){
  char c[3];
  int i[3];
  long l[3];
  float f[3];
  double d[3];
  printf("%p\n", c);
  printf("%p\n", i);
  printf("%p\n", l);
  printf("%p\n", f);
  printf("%p\n", d);
  return 0;
}
