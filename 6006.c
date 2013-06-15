#include <stdio.h>
#define NUM 10
typedef struct goods{
  char name[20];
  int value;
}goods_t;

void rich(goods_t*);

int main(void){
  goods_t *p;
  goods_t goods_h[NUM];
  p = goods_h;
  int i;
  for(i = 0;i < NUM;i++){
    printf("num%2d:name : ",i);
    scanf("%s",goods_h[i].name);
    printf("num%2d:price : ",i);
    scanf("%d",&goods_h[i].value);
  }
  rich(p);
  for (i = 0; i < NUM; i++) {
    printf("%s\n", goods_h[i].name);
  }
  return 0; 
}

void rich(goods_t *p){
  int i,j;
  goods_t tmp;
  for (i = 0; i < NUM; i++) {
    for (j = i; j < NUM; j++) {
      if ((p+i)->value < (p+j)->value) {
        tmp = *(p+i);
        *(p+i) = *(p+j);
        *(p+j) = tmp;
      }
    }
  }
}
