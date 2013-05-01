#include <stdio.h>
int fact(int);
int main(void){
    int i,sum=0; 
    for(i=1; i<=20; i++){
        sum += fact(i);
    }
    printf("%d\n", sum);
    return 0;
}


int fact(int x){
    return x*x;
}
