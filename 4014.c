#include <stdio.h>
int main(void){
  int d[10];
  int i, count = 0;
  for (i = 0; i < 10; i++) {
    scanf("%d",&d[i]);
    if(d[i] >= 80){
      count ++;
    }
  }
  printf("%d\n", count);
  return 0;
}
