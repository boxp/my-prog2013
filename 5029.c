#include <stdio.h>
int main(void){
  char str[] = "tinpo!"; 
  int sum = 0, i;
  printf("%s\n", str);
  for (i = 0; str[i] != '\0'; i++) {
    sum += (int)(str[i]);
  }
  printf("%d\n", sum);
  return 0;
}
