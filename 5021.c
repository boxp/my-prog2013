#include <stdio.h>
int main(void){
  int a[10] = {2,4,6,8,10,1,3,5,7,9};
  int b[10];
  int *p;
  int i;
  p = a;
  for (i = 0; i < 10; i++) {
    b[i] = *(p+i);
  }
  for (i = 0; i < 10; i++) {
    printf("%d\n", b[i]);
  }
  return 0;
}
