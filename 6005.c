#include <stdio.h>
typedef struct goods{
  char name[20];
  int value;
}goods_t;

void tax(goods_t*,int);

int main(void){
  goods_t *p;
  goods_t buy;
  int dis;
  p = &buy;
  printf("name : ");
  scanf("%s",p->name);
  printf("price : ");
  scanf("%d",&(p->value));
  printf("discount percent : ");
  scanf("%d",&dis);
  printf("before price : %d\n", p->value);
  tax(p,dis);
  printf("after price : %d\n", p->value);
  printf("discount percent : %d%%\n",dis);
  return 0; 
}

void tax(goods_t *p,int dis){
  p->value *= (double)(100-dis) / 100;
}
