#include <stdio.h>
int main(void){
    int x;
    scanf("%d",&x);
    if(x == 0){
        printf("0\n");
    }else if(x < 0){
        printf("-\n");
    }else{
        printf("+\n");
    }
    return 0;
}
