#include <stdio.h>
int main(void){
    int array[5];
    int i,sum,ave;
    for(i = 0;i < 5; i++){
        scanf("%d",&array[i]);
    }
    for (i = 0 ; i < 5; i++ ) {
        sum += array[i];
    } 
    printf("%d\n",sum );
    printf("%f\n",(float)(sum)/5.0);
    return 0;
}
