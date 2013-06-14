#include <stdio.h>
int main(void){
  char str[100];
  char *str_point = str; 
  scanf("%s",str);
  while (*str_point != '\0') {
    printf("%c\n", *str_point++);
  }
  return 0;
}
