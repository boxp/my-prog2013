#include <stdio.h>
int odd_in(int);
int main(void){
  int n,i,sum = 0; 
  for(i = 1;i <= 100; i++){
    sum += odd_in(i); 
  }
  printf("%d\n", sum);
  return 0;
}

int odd_in(int x){
  if(x % 2 == 0){
    return 0;
  }else{
    return x;
  }
}
