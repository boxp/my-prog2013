#include <stdio.h>
int main(void){
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("z = %d\n", z);
    printf("%d + %d + %d = %d\n", x, y, z, x + y + z );
    return 0;
}
