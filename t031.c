#include <stdio.h>
int main(void){
    int n,sum=0;
    while(1){
        scanf("%d",&n);
        if(n == -999)
            return 0;
        sum += n;
        printf("%d\n", sum);
    }
    return 0;
}
