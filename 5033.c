#include <stdio.h>
int main(void){
  char src[] = "TOKYO";
  char dst[6]; 
  char *s = dst;
  char *t = src;
  while ((*s++ = *t++) != 0);
  printf("%s\n", dst);
  return 0;
}
