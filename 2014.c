#include <stdio.h>
int main(void){
    char c; 
    scanf("%c", &c);
    c += 0x10;
    if((c > 0x40 && c < 0x5B) || ( c > 0x60 && c < 0x7B)){
        printf("%c\n", c);
    }else{
        printf("out of range\n");
    }
    return 0;
}

