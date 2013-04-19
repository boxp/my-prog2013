#include <stdio.h>
int main(void){
    char x;
    scanf("%c",&x);
    printf("%c\n",x - ('a' - 'A') );
    printf("%#x\n", x);
    printf("%#x\n",x - ('a' - 'A') );
    return 0;
}
