#include <stdio.h>
int main(void){
  float a[10];
  float tmp;
  int i;
  for (i = 0; i < 10; i++) {
    scanf("%f",&a[i]);
  }
  for (i = 0; i < 5; i++) {
    tmp = a[i];
    a[i] = a[9-i];
    a[9-i] = tmp;
  }
  for (i = 0; i < 10; i++) {
    printf("%f\n", a[i]);
  }
  return 0
}
