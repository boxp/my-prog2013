#include <stdio.h>
int main(void){
    double r3 = 1.7320508;
    double a; 
    scanf("%lf", &a);
    if(a > 0){
        printf("%0.15lf\n", a*a*r3/4.0);
    }
    return 0;
}
