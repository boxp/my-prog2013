#include <stdio.h>
int main(void){
    int x;
    scanf("%d", &x); 
    if(x == 0){
        return 0;
    }else if(x % 2 == 0){
        printf("0\n");
    }else{
        printf("1\n");
    }
    return 0;
}
