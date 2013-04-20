#include <stdio.h>
int main(void){
    int x;
    scanf("%d", &x);
    switch (x % 2) {
        case 0:
            if(x ==0){
                printf("Illegal\n");
                break;
            }
            printf("even\n");
            break;
        case 1:
            printf("odd\n");
            break;
        default:
            printf("Illegal\n");
    }
   return 0;
}
