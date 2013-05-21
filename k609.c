#include <stdio.h>
int main(void){
  int d[5];
  int temp; 
  int i,j,n;

  n = 5;
  printf("データを%d個入力してください\n", n);
  for (i = 0; i < n; i++) {
    scanf("%d", &d[i]);
  }

  for (i = 0; i < n; i++) {
    for (j = i+1 ; j < n; j++) {
      if( d[j] > d[i]){
        temp = d[j];
        d[j] = d[i];
        d[i] = temp;
      }
    }
  }

  printf("ソートの結果です\n");
  for(i = 0; i < n; i++){
    printf("%d\n", d[i]);
  }
  return 0;
}
