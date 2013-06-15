#include <stdio.h>
#include <math.h>
#define SIZE 10
typedef struct zahyo {
  float x;
  float y;
  float dim;
}zahyo_t;

zahyo_t* dimcheck(zahyo_t*);

int main(void){
  int i;
  zahyo_t zahyo_d[SIZE];
  zahyo_t *p;
  p = &zahyo_d[0];
  for (i = 0; i < SIZE; i++) {
    printf("(x,y) = ");
    scanf("%f",&zahyo_d[i].x);
    scanf("%f",&zahyo_d[i].y);
  }
  p = dimcheck(p);
  for (i = 0; i < SIZE; i++) {
    printf("%f\n", zahyo_d[i].dim);
  }
  printf("(x,y) = (%f,%f)\n",p->x,p->y);
  printf("dim = %f\n", p->dim);
  return 0;
}

zahyo_t* dimcheck(zahyo_t *p){
  zahyo_t *max_p;
  float max_dim = 0.0;
  int i;
  for (i = 0; i < SIZE; i++,p++) {
    p->dim = hypot(p->x,p->y);
    if (max_dim < p->dim) {
      max_dim = p->dim;
      max_p = p;
    }
  }
  return max_p;
}
 
