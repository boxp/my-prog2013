#include <stdio.h>
int a(int);
int main(void){
  int i;
  for (i = 1; i < 10; i++) {
    printf("%d\n", a(i));
  }
}
int a(int n){
  if(n == 1){
    return 1;
  }else if(n == 2){
    return 1;
  }else{
     return a(n - 1) + a(n -2);
  }
}
