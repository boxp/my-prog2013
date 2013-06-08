#include <stdio.h>
int count = 0;
int odd(int);
int main(void){
  int i;
  int sum=0;
  for (i = 0; i < 100; i++) {
    sum += odd(i);
  }
  printf("%d\n",sum);
  printf("%d\n", count);

}
int odd(int n){
  if (n%2 == 0) {
    return 0;
  }else{
    count++;
    return n;
  }
}
