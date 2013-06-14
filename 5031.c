#include <stdio.h>
#define MAX 100
int main(void){
  char str[MAX]; 
  char str_cp[MAX];
  int i, end, f = 0;
  scanf("%s",str);
  for (i = 0; i < MAX; i++) {
    if (str[i] == '\0') {
      end = i;
      break;
    }
  }
  for (i = 0; i < end + 1; i++) {
    str_cp[i] = str[end - 1 - i];
    if (*(str_cp+i) != *(str+i)) {
      f = 1;
      break;
    }
  }
  if (f == 0) {
    printf("match\n");
  }else{
    printf("not match\n");
  }
  return 0;
}
