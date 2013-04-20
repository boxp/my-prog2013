#include <stdio.h>
int main(void){
    char c; 
    scanf("%c", &c);
   
    if(c > 0x40 && c < 0x5B){
        printf("Large\n");
    }else if(c > 0x60 && 0x7B){
        printf("Small\n");
    }else{
        printf("Not an alphabet\n");
    }
    return 0;
}
