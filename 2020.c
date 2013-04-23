#include <stdio.h>
int main(void){
    int data, a = 6, b = 4; 

    data = a % b;
    if(data){
        printf("data = %d \nNo \a\a\a\a\n", data);
    }else{
        printf("data = %d \nYes \a\a\a\a\n", data);
    }
    return 0;
}
