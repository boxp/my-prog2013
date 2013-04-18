#include <stdio.h>
int main(void){
    int a,b,c;
   scanf("%d%d",&a,&b);
   c = a % b;
   if(c == 0){
       printf("%d / %d = %d\n", a, b, a/b);
   }else{
       printf("%d / %d = %d remainder %d\n", a, b, a/b,c);
   }
   return 0;
}
