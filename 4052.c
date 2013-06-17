#include <stdio.h>
int main(void){
  char C[10]; 
  char *p = C;
  scanf("%s",C);
  while (*p != '\0') {
    if (*p >= 'A' && *p <= 'Z') {
      printf("%c", *p);
    }
    p++;
  }
  printf("\n");
  return 0;
}
