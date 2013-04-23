#include <stdio.h>
#include <stdlib.h>
int main(void){
    int seed,input_num,num, i, j; 
    
    printf("Input Seed!>>>");
    scanf("%d", &seed);
    srand(seed);
    num = rand()%100000;

    for(i = 0, j=29; i<30; i++, j--){
        printf("%dtimes. Input >>> ", i + 1 );
        scanf( "%d", &input_num);

        if(input_num > num){
            printf("Large ! chance \n", j);
        }else if (input_num < num) {
            printf("Small ! chance \n", j);
        }else{
            printf("\n\n ********** \n");
            printf(" * BINGO * \n");
            printf(" ********** \n");
            break;
        }
    }
    return 0;
}
