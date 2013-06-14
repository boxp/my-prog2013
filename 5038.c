#include <stdio.h>
int main(void){
  char str[10];
  scanf("%s",str);
  char *ptr = str;
  while (*ptr != '\0') {
    printf("%c\n", *ptr++);
  }
  return 0;
}
