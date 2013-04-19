#include <stdio.h>
int main(void){
  char n;
  scanf("%c",&n);
  switch (n) {
    case 'a':
    case 'b':
    case 'c':
      printf("bingo\n");
      break;
  }
  return 0;
}
