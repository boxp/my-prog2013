#include <stdio.h>
int main(void){
  int a[20][3]; 
  double eng_ave = 0.0;
  double math_ave = 0.0;
  double sci_ave = 0.0;
  int i,j;
  for (i = 0; i < 20; i++) {
    for (j = 0; j < 3; j++) {
      do{
        printf("Input a[%d][%d] :",i,j);
        scanf("%d",&a[i][j]);
      }while(a[i][j] > 100);
      switch (j) {
        case 0:
          eng_ave += a[i][j];
          break;
        case 1:
          math_ave += a[i][j];
          break;
        case 2:
          sci_ave += a[i][j];
          break;
      }
    }
  }
  printf("English Average : %f\n",eng_ave/20.0 );
  printf("Math Average : %f\n",math_ave/20.0 );
  printf("Science Average : %f\n",sci_ave/20.0 );
  return 0;
}
