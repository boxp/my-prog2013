#include <stdio.h>
typedef struct goods{
  char name[20];
  int value;
}goods_t;

int main(void){
  goods_t *p;
  goods_t buy;
  p = &buy;
  scanf("%s",p->name);
  scanf("%d",&(p->value));
  printf("%s\n", p->name);
  printf("%d\n", p->value);
  return 0; 
}
