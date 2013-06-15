#include <stdio.h>
typedef struct profile {
  char name[20];
  int age;
}profile_t;
int main(void){
  profile_t pro;
  scanf("%s",pro.name);
  scanf("%d",&pro.age);
  printf("%s\n", pro.name);
  printf("%d\n", pro.age);
  return 0;
}
