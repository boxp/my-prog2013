#include <stdio.h>
typedef struct profile{
  char name[20];
  char number[20];
  int age;
}profile_t;
int main(void){
  profile_t p;
  scanf("%s",p.name);
  scanf("%s",p.number);
  scanf("%d",&p.age);
  printf("age: %d\n", p.age+1);
  return 0; 
}
