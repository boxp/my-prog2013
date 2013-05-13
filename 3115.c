#include <stdio.h>
int fibo(int);
int main(void){
  int i; 
  for(i = 0;i < 10; i++){
    printf("%d\n", fibo(i));
  }
  return 0;
}
int fibo(int x){
  if(x == 0){
    return 0;
  }else if(x == 1){
    return 1;
  }else{
    return fibo(x-1) + fibo(x-2);
  }
}
