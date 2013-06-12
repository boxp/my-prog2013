#include <stdio.h>
int main(void){
  int num[10];
  int i;
  for (i = 0; i < 10; i++){
    scanf("%d",&num[i]);
  }
  for (i = 0; i < 10; i++) {
    if (num[i] % 2 != 0) {
      printf("%d\n", num[i]);
    }
  }
  return 0;
}
