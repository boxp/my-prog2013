#include <stdio.h>
int main(void){
    int x; 
    scanf("%d",&x);
    if(x < 0){
        printf("%d\n", -1 * x);
    }else{
        printf("%d\n", x);
    }
    return 0;
}
