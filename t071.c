#include <stdio.h>
int main(void){
  int num[10] = {1,2,3,4,5,6,7,8,9,10};
  int i,sum = 0;
  for (i = 0; i < 10; i++) {
    sum += num[i];
  }
  printf("%d\n", sum);
  return 0;
}
