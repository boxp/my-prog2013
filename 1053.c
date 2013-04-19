#include <stdio.h>
#include <math.h>

int main(void){
    double a,b,c,d;
    scanf("%lf%lf%lf",&a,&b,&c);

    d = pow(b,2) - 4 * a * c;
    printf("%f\n", (-b + d ) / 2 * a);
    if(d != 0){
        printf("%f\n", (-b - d) / 2 * a);
    }
    return 0;
}
