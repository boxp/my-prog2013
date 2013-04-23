#include <stdio.h>
int main(void){
    double x,y;
    double tmp,pi = 3.1416;
    scanf("%lf%lf", &x, &y);
    if(x > y){
        tmp = x;
        x = y;
        y = tmp;
    }
    printf("r = %0.1lf S = %0.4lf\n", x,x*x*pi);
    printf("r = %0.1lf S = %0.4lf\n", y,y*y*pi);
    return 0;
}
