#include <stdio.h>
<<<<<<< HEAD
#define N  1000
=======
#define N  1000;
>>>>>>> 9bd5d89acf6116b3b9d6bb9f75fa320d7d796c61
int main(void){
    int x,y;
    scanf("%d%d", &x, &y);
    if(x * y == N){
        printf("HIT\n");
    }else{
        printf("NG\n");
    }
    return 0;
}
