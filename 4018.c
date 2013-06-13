#include <stdio.h>
int main(void){
  int c[7][7]; 
  int i,j,f=0;
  for (i = 0; i < 7; i++) {
    for (j = 0; j < 7; j++) {
      scanf("%d",&c[i][j]);
    }
  }
  for (i = 0; i < 7; i++) {
    for (j = 0; j < 7; j++) {
      if (c[i][j] != c[j][i]) {
        f = 1;
        break;
      }
    }
  }
  if (f == 0) {
    printf("match\n");
  }else{
    printf("not match\n");
  }
  return 0;
}

