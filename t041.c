#include <stdio.h>
int main(void){
  int i,n,sum = 0;
  for(;;){
    scanf("%d",&n);
    if(n == -999)
      break;
    sum +=   n;
    printf("%d\n", sum);
  }
  return 0;
}
