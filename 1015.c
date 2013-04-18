#include <stdio.h>
int main(void){
    int a =6, b=3;
   a += b;
   printf("kekka1 = %d\n", a);
   a -= b;
   printf("kekka2 = %d\n", a);
   a *= b;
   printf("kekka3 = %d\n", a);
   a /= b;
   printf("kekka4 = %d\n", a);
   a %= b;
   printf("kekka5 = %d\n", a);
   return 0;
}
