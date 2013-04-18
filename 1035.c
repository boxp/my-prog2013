#include <stdio.h>
#include <math.h>
int main(void){
    double x,y;
    scanf("%lf%lf",&x,&y);
    printf("%f\n", (x + y) / 2);
    printf("%f\n", sqrt(x*y));
    return 0;
}
