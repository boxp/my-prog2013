#include <stdio.h>
#include <math.h>
int main(void){
    double pi = 3.14;
    double r;
    double d;
    double L;
    r = 6400 * 1000;
    d = 1.0 / 1000;
    L = 0.71;
    printf("%lf\n", d);
    printf("%lf\n", 4 * pi * (pow(r,3) - pow(r-d,3)) / 3 * L);
    return 0;
}
