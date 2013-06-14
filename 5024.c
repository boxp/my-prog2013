#include <stdio.h>
#define MAX 1000
int main(void){
  char phone[MAX];
  char str[MAX];
  char *tel;
  int i , count = 0;
  printf("phone: ");
  scanf("%s",phone);
  for (i = 0; phone[i] != '\0'; i++) {
    if (phone[i] != '-') {
      str[i-count] = phone[i];
    }else{
      count++;
    }    
  }
  str[i-count] = '\0';
  tel = str;
  printf("  tel: %s\n", tel);
  return 0;
}
