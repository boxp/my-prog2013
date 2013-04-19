#include <stdio.h>
#include <math.h>

int main(void){
    float x1,y1,x2,y2;
    printf("(x1,y1)\n");
    scanf("%f%f",&x1,&y1);
    printf("(x2,y2)\n");
    scanf("%f%f",&x2,&y2);
    printf("%f\n",hypot((x2 - x1) ,(y2 - y1)));
    return 0;
}
