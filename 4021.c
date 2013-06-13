#include <stdio.h>
int main(void){
  int arr[2][2]; 
  int i;
  int n;
  for (i = 0; i < 2; i++) {
    do {
      scanf("%d",&n);
    } while (n < 0 || n > 99);
    arr[i][0] = n / 10;
    arr[i][1] = n % 10;
  }
  for (i = 0; i < 2; i++) {
    printf("arr[i][0] = %d / arr[i][1] = %d\n", arr[i][0],arr[i][1]);
  }
  return 0;
}
