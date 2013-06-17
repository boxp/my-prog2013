#include <stdio.h>
int main(void){
  char charlist[27]; 
  char *p = charlist;
  char a = 'a';
  while((*p++ = a++) < 'z');
  *p = '\0';
  printf("%s\n", charlist);
  return 0;
}
