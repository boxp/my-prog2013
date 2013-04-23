#include <stdio.h>
#include <math.h>
int main(void){
    double x; 
    scanf("%lf", &x);
    if(x < 0){
        printf("ERROR\n");
        return 0;
    }
    printf("%f\n", sqrt(x));
    return 0;
}
