#include <stdio.h>
int match(int* x,int* y);
int main(void){
  int a=1;
  int b=1;
  int *x=&a;
  int *y=&b;
  printf("%d\n", match(x,y));
  return 0;
}
int match(int* x,int* y){
  if (x == y) {
    return 1;
  }else{
    return 0;
  }
}
