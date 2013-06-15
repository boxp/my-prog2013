#include <stdio.h>
void swap_char(char*,char*);
int main(void){
  char a,b;
  scanf("%c",&a);
  scanf("%c",&b);
  char *p1=&a;
  char *p2=&b;
  swap_char(p1,p2);
  printf("p1:%c\n", *p1);
  printf("p2:%c\n", *p2);
  return 0;
}

void swap_char(char *p1, char *p2){
  char n = 'a';
  char *p = &n;
  *p = *p1;
  *p1 = *p2;
  *p2 = *p;
}
