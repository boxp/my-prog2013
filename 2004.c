#include <stdio.h>
int main(void){
    int n,o; 
    scanf("%d%d", &n, &o);
    if(n > o){
        printf("The former is bigger\n");
    }else if(n < o){
        printf("The latter is bigger\n");
    }
    return 0;
}
