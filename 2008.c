#include <stdio.h>
int main(void){
   char c;
   scanf("%c",&c);
   if(c=='a'|| c=='i'|| c=='u'|| c=='e'|| c=='o'){
       printf("母音です\n");
   }else{
       printf("子音です\n");
   }
   return 0;
}
