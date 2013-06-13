#include <stdio.h>
int main(void){
  int d[10];
  int i;
  for (i = 0; i < 10; i++) {
    scanf("%d",&d[i]);
  }
  for (i = 0; i < 10; i++) {
    if (d[i] % 3 == 0) {
      printf("exist!\n");
      break;
    }
  }
  return 0;
}
