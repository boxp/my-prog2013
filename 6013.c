#include <stdio.h>
typedef struct point {
  float x;
  float y;
  float z;
}point_t;
int main(void){
  point_t  p;
  scanf("%f",&p.x);
  scanf("%f",&p.y);
  scanf("%f",&p.z);
  printf("(x,y,z) = (%f,%f,%f)\n", p.x, p.y, p.z);
  return 0; 
}
