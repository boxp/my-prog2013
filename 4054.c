#include <stdio.h>
int main(void){
  int a[5];
  int b[5];
  int *ap=a;
  int *bp=b;
  int i,j;
  for (i = 0; i < 5; i++) {
    scanf("%d",&a[i]);
  }
  for (i = 0; i < 5; i++) {
    scanf("%d",&b[i]);
  }
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      if (*(ap+i) == *(bp+j)) {
        printf("%d\t", *(ap+i));
        break;
      }
    }
  }
  printf("\n");
  return 0;
}
