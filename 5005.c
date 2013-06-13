#include <stdio.h>
int main(void){
  char cx = 'a';
  int ix = 1;
  double lfx = 1.0;
  char *c; 
  int *i;
  double *lf;
  int n;
  c = &cx;
  i = &ix;
  lf = &lfx;
  printf("%p\n", c);
  printf("%p\n", i);
  printf("%p\n", lf);
  scanf("%d",&n);
  printf("%p\n", c+n);
  printf("%p\n", i+n);
  printf("%p\n", lf+n);
  return 0;
}
