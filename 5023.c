#include <stdio.h>
int main(void){
  int array[10]; 
  int *po;
  int i;
  for (i = 0; i < 10; i++) {
    scanf("%d",&array[i]);
  }
  po = array;
  for (i = 0; i < 10; i++) {
    printf("%d\n", *(po+i));
  }
  return 0;
}
