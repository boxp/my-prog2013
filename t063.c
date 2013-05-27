#include <stdio.h>
int main(void){
  double num[10];
  int i,j;
  double tmp;
  for (i = 0; i < 10; i++) {
    scanf("%lf",&num[i]);
  }
  for (i = 0; i < 10; i++) {
    for (j =i + 1; j < 10; j++) {
      if (num[i] > num[j]) {
        tmp = num[i];
        num[i] = num[j];
        num[j] = tmp;
      }
    }
  }
  for (i = 0; i < 10; i++) {
    printf("%lf\n", num[i]);
  }
  return 0;
}
