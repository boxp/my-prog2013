#include <stdio.h>
int main(void){
    char x[3];
    char tmp;
    int i,j;

    for(i=0; i<3; i++){
        scanf("%c", &x[i]);
    }

    for(i=0; i<3; i++){
        for(j = i+1; j<3; j++){
            if( ( x[i] - x[j] ) > 0){
                tmp = x[i];
                x[i]=x[j];
                x[j]=tmp;
            }
        }
    }
    for(i=0;i<3;i++){
        printf("%c\n",x[i]);
    }
   return 0;
}
