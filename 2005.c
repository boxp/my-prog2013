#include <stdio.h>
int main(void){
    int x; 
    scanf("%d", &x);
    if(x < 2 || x >= 6){
        printf("OK\n");
    }
    return 0;
}
