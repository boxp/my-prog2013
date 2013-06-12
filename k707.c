#include <stdio.h>
#include <string.h>
void str_copy(char dst[], char src[]);
int main(void){
  char Tokyo[] = "TOKYO";
  char my_city[10];
  char str[10];
  
  str_copy(my_city, Tokyo);
  strcpy(str,Tokyo);
  printf("私は%sに住んでいます。\n", my_city);
  printf("私は%sに住んでいます。\n", str);
  return 0;
}
void str_copy(char dst[], char src[]){
  int i;
  for (i = 0; src[i] != '\0' ;i++) {
    dst[i] = src[i];
  }
  dst[i] = '\0';
}
