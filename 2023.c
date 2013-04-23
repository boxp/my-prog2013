#include <stdio.h>
int main(void){
    int x;
    scanf("%d", &x); 
    if(x % 2 == 1){
        printf("1\n");
        if(x % 5 == 0)
            printf("5\n");
    }else{
        printf("X\n");
    }
    return 0;
}
