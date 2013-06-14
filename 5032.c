#include <stdio.h>
#define MAX 1000
int main(void){
  char str[MAX]; 
  char cpy[MAX]; 
  char *s = str;
  int i=0;
  scanf("%s",str);
  while (*s != 0) {
    *(cpy+i++) = *s++;
  }
  *(cpy+i) = '\0';
  printf("%s\n", cpy);
  return 0;
}
