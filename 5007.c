#include <stdio.h>
int main(void){
  char c[3];
  int i[3];
  long l[3];
  float f[3];
  double d[3];
  char *cp = c;
  int *ip = i;
  long *lp = l;
  float *fp = f;
  double *dp = d;
  int j;
  for (j = 0; j < 3; j++) {
    printf("%p\n", cp+j);
  }
  for (j = 0; j < 3; j++) {
    printf("%p\n", ip+j);
  }
  for (j = 0; j < 3; j++) {
    printf("%p\n", lp+j);
  }
  for (j = 0; j < 3; j++) {
    printf("%p\n", fp+j);
  }
  for (j = 0; j < 3; j++) {
    printf("%p\n", dp+j);
  }
  return 0;
}
