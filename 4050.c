#include <stdio.h>
int main(void){
  char string[100]; 
  char substring[100];
  int n;
  int i;
  scanf("%s",string);
  scanf("%d",&n);
  for ( i = 0;  i < n;  i++) {
    substring[i] = string[i];
  }
  substring[i] = '\0';
  printf("%s\n", substring);
  return 0;
}

