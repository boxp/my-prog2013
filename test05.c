#include <stdio.h>
int main(void){
  char c; 
  scanf("%c",&c);
  if (c >= 'a' && c <= 'h') {
    printf("small\n");
  }else if (c >= 'A' && c <= 'H') {
    printf("large\n");
  }else{
    printf("not match\n");
  }
  return 0;
}
