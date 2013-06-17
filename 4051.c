#include <stdio.h>
void swap(char*,char*);
int main(void){
  char str[100]; 
  char strp[100]; 
  int i;
  scanf("%s",str);
  change(strp,str);
  for (i = 0; strp[i] != '\0'; i++) {
    str[i] = strp[i+1];
  }
  str[i] = '\0';
  printf("%s\n", str);
  return 0;
}
void change(char *p,char *srcp){
  while(*p++=*srcp++);
}
