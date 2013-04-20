#include <stdio.h>
int main(void){
<<<<<<< HEAD
    char x[3];
    char tmp;
    int i,j;

    for(i=0; i<3; i++){
        scanf("%c", &x[i]);
    }

    for(i=0; i<3; i++){
        for(j = i+1; j<3; j++){
            if( ( x[i] - x[j] ) > 0){
                tmp = x[i];
                x[i]=x[j];
                x[j]=tmp;
            }
        }
    }
    for(i=0;i<3;i++){
        printf("%c\n",x[i]);
    }
=======
    char x,y;
    char a;
    
    scanf("%c%c",&x, &y);
    scanf("%c",&a);
    printf("%c%c%c\n", x, y, a);
>>>>>>> 9bd5d89acf6116b3b9d6bb9f75fa320d7d796c61
    return 0;
}
