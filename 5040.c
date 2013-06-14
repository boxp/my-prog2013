#include <stdio.h>
int main(void){
  char str[100];
  char *p=str;
  scanf("%s",str);
  while (*p != '\0') {
    printf("%c", *p++);
    if (*p == '\0') 
      break;
    p++;
    
  }
  printf("\n");
  return 0;
}
