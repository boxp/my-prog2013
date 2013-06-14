#include <stdio.h>
void str_copy(char *dst,char *src);
void no_s(char*);
int main(void){
  char str_s[5];
  char str_v[20];
  char str_o[50];
  char str_m[5];
  char *sp=str_s;
  char *vp=str_v;
  char *op=str_o;
  char *mp=str_m;
  scanf("%s",str_s);
  scanf("%s",str_v);
  scanf("%s",str_o);
  if(*str_s == 'H'){
    str_copy(str_s,"he");
    str_copy(str_m,"does");
    no_s(str_v);
  }else if(*str_s == 'S') {
    str_copy(str_s,"she");
    str_copy(str_m,"does");
    no_s(str_v);
  }else if(*str_s =='I') {
    str_copy(str_s,"you");
    str_copy(str_m,"do");
  }else{
    str_copy(str_s,"they");
    str_copy(str_m,"do");
  }
  printf("What ");
  printf("%s ", str_m);
  printf("%s ", str_s);
  printf("%s", str_v);
  printf("?\n");
  return 0;
}
void str_copy(char *dst,char *src){
  while (*dst++ = *src++);
}
  
void no_s(char *des){
  int i, count = 0;
  for (i = 0; *(des+i) != '\0'; i++) {
    count++;
  }
  *(des+count-1) = '\0';
}
