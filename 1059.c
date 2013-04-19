#include <stdio.h>
#include <math.h>

int main(void){
    float x[3];
    float y[3];
    float l[3];
    float tmp, big = 0;
    int i;
    for(i=0; i<3; i++){
        printf("(x%d,y%d)", i, i);
        scanf("%f%f", &x[i], &y[i]);
    }
    l[0] = hypot(x[0]-x[1],y[0]-y[1]);
    l[1] = hypot(x[1]-x[2],y[1]-y[2]);
    l[2] = hypot(x[2]-x[0],y[2]-y[0]);
    for(i=0; i<3; i++){
        if(big < l[i])
            big = l[i];
    }
    printf("%f\n", big);
    return 0;
}
