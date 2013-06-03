#include <stdio.h>
int main(void){
  int a[10];
  int i,j;
  int tmp;
  for (i = 0; i < 10; i++) {
    scanf("%d",&a[i]);
  }
  for (i = 0; i < 10; i++) {
    for (j = i+1; j < 10; j++) {
      if (a[i] > a[j]) {
        tmp = a[j];
        a[j] = a[i];
        a[i] = tmp;
      }
    }
  }
  for (i = 0; i < 10; i++) {
    printf("%d\n", a[i]);
  }
  return 0;
}
