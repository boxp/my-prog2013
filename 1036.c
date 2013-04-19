#include <stdio.h>
int main(void){
    int a;
    a = 321;
    printf("%d\n", a / 100); 
    printf("%d\n", a % 100 / 10); 
    printf("%d\n", a % 10); 
    return 0;
}
