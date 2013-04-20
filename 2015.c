#include <stdio.h>
#define N  1000
int main(void){
    int x,y;
    scanf("%d%d", &x, &y);
    if(x * y == N){
        printf("HIT\n");
    }else{
        printf("NG\n");
    }
    return 0;
}
