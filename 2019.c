#include <stdio.h>
#include <math.h>
int main(void){
    float l,m,n,tmp;
    scanf("%f%f%f", &l, &m, &n);
    if(l < m){
        tmp = l;
        l = m;
        m = tmp;
    }
    if(l < n){
        tmp = l;
        l = n;
        n = tmp;
    }
    if(m < n){
        tmp = m;
        m = n;
        n = tmp;
    }
    if(l <= m + n){
        printf("三角形できる！\n");
    }else{
        printf("NO\n");
    }
    return 0;
}
