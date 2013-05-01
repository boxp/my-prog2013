#include <stdio.h>
#include <math.h>

double mysqrt(double x);

int main(void){
    double x;

    printf("\tx\tsqrt x\t\tmysqrt x\n");
    for (x = 1.0; x <= 10.0; x+=1.0) {
        printf("\t%3.1f\t%12.10f\t%12.10f\n", x, sqrt(x), mysqrt(x));
    }
    return 0;

}
double mysqrt(double x){
    double guess = x / 2.0;
    double extreme_guess = 0.0;
    while (guess != extreme_guess) {
       extreme_guess = guess;
       guess = (guess + x / guess) / 2.0;
    }
    return guess;
}
