#include <stdio.h>
int main(void){
  int n,m; 
  int *x, *y;
  scanf("%d", &n);
  scanf("%d", &m);
  x = &n;
  y = &m;
  printf("%d\n", *x);
  printf("%d\n", *y);
  return 0;
}
