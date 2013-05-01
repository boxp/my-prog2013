#include <stdio.h>
int mult(int,int);
int main(void){
    int i=1,j=1;
    do{
        do{
            printf("%d × %d = %d\n", i ,j,mult(i,j));
            j++;
        }while(j<=9);
       i++;
        j=1;
    }while(i<=9);
    return 0;
}

int mult(int x, int y){
    return x*y;
}
