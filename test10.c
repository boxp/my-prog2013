#include <stdio.h>
int main(void){
  int num[3] = { 5, 8, 12};
  int sum = 0;
  int i;
  for (i = 0; i < 3; i++) {
    sum += num[i];
  } 
  printf("%d\n", sum);
  return 0;
}
