#include <stdio.h>
int main(void){
    int n; 
    scanf("%d", &n);
    switch (n % 2) {
        case 0:
            printf("even\n");
            break;
        case 1:
            printf("odd\n");
            break;
    }
    return 0;
}
