#include <stdio.h>
int main(void){
    int a,b;
    scanf("%d%d", &a, &b);
    if(b == 0){
        printf("Illegal Number!\n");
    }else{
        printf("%d%d\n", a/b, a%b);
    }
    return 0;
}
