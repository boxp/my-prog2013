#include <stdio.h>
#include <math.h>
typedef struct complex {
    double real;
    double imagin;
}complex_t;
complex_t mult(complex_t,complex_t);
int main(void){
  complex_t p;
  complex_t q;
  printf("real:");
  scanf("%lf",&p.real);
  printf("imaginary:");
  scanf("%lf",&p.imagin);
  printf("real:");
  scanf("%lf",&q.real);
  printf("imaginary:");
  scanf("%lf",&q.imagin);
  complex_t result = mult(p,q);
  printf("(%f %c %fi) *", p.real , (p.imagin)<0 ? '-':'+',fabs(p.imagin));
  printf(" (%f %c %fi) = ", q.real , (q.imagin)<0 ? '-':'+',fabs(q.imagin));
  printf("%f %c %fi\n",result.real , (result.imagin)<0 ? '-':'+',fabs(result.imagin));
  return 0; 
}

complex_t mult(complex_t p,complex_t q){
  complex_t result;
  result.real = p.real * q.real + p.imagin * q.imagin;
  result.imagin = p.real * q.imagin + p.imagin * q.real;
  return result;
}
