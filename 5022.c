#include <stdio.h>
int main(void){
  int num[1234];
  int i,sum = 0;
  int *p_num;
  p_num = num;
  for (i = 0; i < 1234; i++) {
    num[i] = i+1;
  }
  for (i = 0; i < 1234; i++) {
    sum += *(p_num+i);
  }
  printf("%d\n", sum);
  return 0;
}
