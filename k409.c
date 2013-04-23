#include <stdio.h>
#include <math.h>

int main(void){
    double a,b,c,D,x1,x2;
    printf("Input ax^2+bx+c=0 >>>");
    scanf("%lf %lf %lf", &a, &b, &c);
    if(a == 0.0){
        if (b == 0.0){
            printf("A coefficient is different\n");
        }else{
            x1 = -c / b;
            printf("Answer %g\n", x1);
        }
    }else{
        D = b * b - 4 * a * c;
        if( D >= 0.0){
            x1 = ( -b + sqrt( D ) ) / ( 2 * a );
            x2 = ( -b - sqrt( D ) ) / ( 2 * a );
            if( D == 0){
                printf("Answer %g\n", x1);
            }else{
                printf("Answer %g and %g\n", x1 ,x2);
            }
        }else{
            printf("No Answer\n");
        }
    }
    return 0;
}

