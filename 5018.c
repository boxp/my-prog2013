#include <stdio.h>
int main(void){
  int a,b; 
  int *p, *q;

  a = 10;
  b = 20;
  p = &a;
  q = &b;
  printf("1 : a=%d b=%d *p=%d *q=%d\n", a, b, *p, *q);
  *p = 30;
  *q = 40;
  printf("1 : a=%d b=%d *p=%d *q=%d\n", a, b, *p, *q);
  q = &a;
  p = &b;
  printf("1 : a=%d b=%d *p=%d *q=%d\n", a, b, *p, *q);
  q = &b;
  *p = 50;
  printf("1 : a=%d b=%d *p=%d *q=%d\n", a, b, *p, *q);
}
