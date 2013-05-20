#include <stdio.h>
int sum(int);
int main(void){
  int i;
  for(i=1;i<=10;i++){
    printf("%d\n", sum(i));
  }
  return 0;
}
int sum(int n){
  static int m;
  int x;
  x = m;
  m = n;
  return x + m;
}
