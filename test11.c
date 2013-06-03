#include <stdio.h>
#include <stdlib.h>
int main(void){
  int a[20];
  int x[20][2];
  int i,j,tmp1,tmp2;
  int seed;
  printf(" seed\n" );
  scanf("%d",&seed);
  srand(seed);
  for (i = 0; i < 20; i++) {
    a[i] = rand() % 100;
  }
  for (i = 0; i < 20; i++) {
    x[i][0] = a[i];
    x[i][1] = i;
  }

  for (i = 0; i < 20; i++) {
    for (j = i+1; j < 20; j++) {
      if (x[i][0] < x[j][0]) {
        tmp1 = x[i][0];
        tmp2 = x[i][1];
        x[i][0] = x[j][0];
        x[i][1] = x[j][1];
        x[j][0] = tmp1;
        x[j][1] = tmp2;
      }
    }
  }
  printf("number   plxce\n");
  for (i = 0; i < 20; i++) {
    printf("x[%d]=%3d",i, x[i][0]);
    printf("      %d\n", x[i][1] + 1);
  }
  return 0; 
}
