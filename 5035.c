#include <stdio.h>
void agr(char* ,char*);
int main(void){
  char str1[100]; 
  char str2[100];
  scanf("%s",str1);
  scanf("%s",str2);
  agr(str1,str2);
  printf("%s\n", str2);
}
void agr(char* p_1, char* p_2){
  while (*p_1 == *p_2){
    p_1++;
    p_2++;
  }
  *p_2 = '\0';
}
