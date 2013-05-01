#include <stdio.h>

int combi(int, int);
int fact(int n);

int main(void){
    int t, m; 

    for(t=0; t <= 5; t++){
        for (m=0; m<=t; m++) {
            printf("%dC%d=%d\n", t, m ,combi(t,m));
        }
        printf("\n");
    }
    return 0;
}

int  combi(int n,int r){
    return fact(n) / (fact(r) * fact(n-r));
}

int fact(int n){
    int i,fact;
    fact = 1;
    for(i=1; i <= n; i++){
     fact *= i;
    }
 return fact;
}

