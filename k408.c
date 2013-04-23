#include <stdio.h>
#include <math.h>
int main(void){
    int dim;
    double angle;
    double pi, th, x, y;

    printf("The angle? The unit of an input angle?(degree=0 / radian=1) >>> ");
    scanf("%lf %d", &angle, &dim);
     
    pi = 3.1415922653589793;
    if( dim == 0 ){
        th = ( angle * pi ) / 180.0;
        printf("Enter the coordinatesθ = %g[degree]\n", angle);
    }else if( dim == 1){
        th = angle;
        printf("Enter the coordinatesθ = %g[degree]\n", angle);
    }else{
        printf("Input data error:*** unit ***\n");
        return 1;
    }
    x = cos(th);
    y = sin(th);

    printf(" ( %g, %g )\n", x, y);

    return 0;
}
