#include <stdio.h>
int main(void){
  int num[100];
  int i;
  for (i = 0; i < 100; i++) {
    scanf("%d",&num[i]);
  }
  for (i = 0; i < 100; i++) {
    printf("%d\n", num[99-i]);
  }
  return 0;
}
