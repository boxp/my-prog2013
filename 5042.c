#include <stdio.h>
int main(void){
  char array[100]; 
  char *pointer=array;
  int i;
  scanf("%s",array);
  for (i = 0;*(pointer+i) != '\0' ; i++) {
    printf("%s\n", pointer+i);
  }
  return 0;
}
