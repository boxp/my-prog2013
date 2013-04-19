#include <stdio.h>
#include <math.h>

int main(void){
    float x,y; 
    scanf("%f%f", &x, &y);
    printf("%f\n",pow(hypot(x,y),2) * M_PI);
    return 0
}
