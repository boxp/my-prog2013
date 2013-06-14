#include <stdio.h>
int arrayavg(int*,int);

int main(void){
  int num = 5;
  int array[] = {1,2,3,4,5};
  int *p = array;
  printf("%d\n", arrayavg(p,num));
  return 0;
}
int arrayavg(int *p, int num){
  int avg = 0;
  int i;
  for (i = 0; i < num; i++) {
    avg += *(p+i);
  }
  return avg / num;
}
