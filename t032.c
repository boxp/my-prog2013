#include <stdio.h>
#include <math.h>
int main(void){
    double x; 
    scanf("%lf",&x);
    if(x >= 0){
        printf("%f\n", sqrt(x));
    }else{
        printf("%f\n", sqrt(fabs(x)));
    }
    return 0;
}
