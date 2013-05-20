#include <stdio.h>
int odd(int);
int count = 0;
int main(void){
  int i, sum = 0; 
  for(i=1;i<=100;i++){
    sum += odd(i);
  }
  printf("%d\n", sum);
  printf("%d\n", count);
  return 0;
}
int odd(int x){
  if(x % 2 == 0){
    return 0;
  }else{
    count ++;
    return x;
  }
}
