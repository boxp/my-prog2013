#include <stdio.h>
int main(void){
    int x,y,big;
    scanf("%d%d", &x, &y);
    big = x;
    if(big < y)
        big = y;
    printf("%d\n", big);
    return 0;
}
