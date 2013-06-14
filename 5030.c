#include <stdio.h>
int zero(int *p,int n);
int main(void){
  int n; 
  int x[100];
  int i;
  scanf("%d",&n);
  for (i = 0; i < n; i++) {
    scanf("%d",&x[i]);
  }
  printf("%d\n",zero(&x[0],n) );
  return 0;
}
int zero(int *p,int n){
  int sum = 0; 
  int i,j;
  for (i = 0; i < n; i++) {
    for (j = 0; j <= i; j++) {
      sum += *(p + j);
    }
    if (sum == 0) {
      return j;
    }else{
      sum = 0;
    }
  }
  return -1;
}

