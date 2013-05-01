#include <stdio.h>

int combi(int, int);

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
    int i, nk=1, rk=1, nr=1;

    for(i =1; i<=n ; i++){
        nk *= i;
    }

    for(i=1; i<=r; i++){
        rk *= i;
    }

    for(i=1; i<= (n-r); i++){
        nr *= i;
    }
    
    return nk / (rk * nr);
}
