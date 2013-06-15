#include <stdio.h>
typedef struct table{
  int x;
  int y;
}table_t;
int main(void){
  table_t t;
  scanf("%d%d",&t.x,&t.y);
  printf("%d\n", t.x * t.y);
  return 0;
}
