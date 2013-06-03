#include <stdio.h>
int main(void){
  int x; 
  int i;
  char bit[8];
  scanf("%d",&x);
  printf("%d\n", x);
  for (i = 0; i < 8; i++) {
    bit[i] = x % 2;
    x /= 2;
  }
  for (i = 7; i >= 0; i--) {
    printf("%d", bit[i]);
  }
  printf("\n");
  return 0;
}
