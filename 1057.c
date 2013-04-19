#include <stdio.h>
#include <math.h>
int main(void){
    double x[2];
    double y[2];
    double l[3];
    double s = 0;
    int i;

    for (i = 0; i<2 ; i++) {
        printf("(x,y)");
        scanf("%lf%lf", &x[i], &y[i]);
    }

    l[0] = hypot(x[0],y[0]);
    l[1] = hypot(x[1],y[1]);
    l[2] = hypot(x[0] - x[1], y[0] - y[1]);

    for(i = 0; i<3; i++){
        s += l[i];
        printf("%f\n", l[i]);
    }
    s /= 2;
    printf("%f\n", s);
    printf("%f\n",sqrt(s * (s - l[0]) * (s - l[1]) * (s - l[2])));
    return 0;
}
