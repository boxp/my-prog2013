#include <stdio.h>
int main(void){
  int data[10]={1,2,3,4,5,6,7,8,9,10};
  int *p;
  p = data;
  int i;
  for (i = 0; i < 10; i++) {
    printf("%d\n", *(p+i));
  }
  return 0;
}
