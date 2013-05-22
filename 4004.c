#include <stdio.h>
int main(void){
  int d[5];
  int i;
  for(i=0;i<5;i++){
    scanf("%d",&d[i]);
  }
  for ( i= 0;  i < 5;  i++) {
    printf("%d\n", d[i]);
  }
  return 0;
}
