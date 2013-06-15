#include <stdio.h>
#include <math.h> 
struct zahyo {
    float x;
    float y;
}; 
float kyori(struct zahyo,struct zahyo);
int main(void){
  struct zahyo z1;
  struct zahyo z2;
  scanf("%f",&z1.x);
  scanf("%f",&z1.y);
  scanf("%f",&z2.x);
  scanf("%f",&z2.y);
  printf("%f\n", kyori(z1,z2));
  return 0;
}

float kyori(struct zahyo z1,struct zahyo z2){
  return hypot((z2.x) - (z1.x),(z2.y - z1.y));
}
