#include <stdio.h>
int main(void){
  int n;
  scanf("%d",&n);
  switch (n%3) {
    case 0:
      printf("zero\n");
      break;
    case 1:
      printf("one\n");   
      break;
    case 2:
      printf("two\n");
      break;
  return 0;
}
