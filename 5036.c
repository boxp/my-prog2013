#include <stdio.h>
int main(void){
  char str[100]; 
  char *p = str;
  int i,j;
  int count_same = 0;
  int count_all =0;
  scanf("%s",str);
  for (i = 0; *(p+i) != '\0'; i++) {
    for (j = i+1; *(p+j) != '\0' ; j++) {
      if (*(p+i)==*(p+j)) {
        count_same++;
        break;
      }
    }
    count_all++;
  }
  printf("%dtype\n", count_all - count_same);
  return 0;
}
