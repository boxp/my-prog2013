#include <stdio.h>
#define MAXN 500
int main(void){
  int d[MAXN];
  int i, j, n;
  int temp;
  printf("データの個数を入力して下さい\n");
  do {
    scanf("%d",&n);
    if ((n < 2) || (n > MAXN)) {
      printf("2から%dまでの値を入力してください\n", MAXN);
    }
  } while ((n < 2) || (n > MAXN));

  printf("データを入力してください\n");
  for (i = 0; i < n; i++) {
    scanf("%d",&d[i]);
  }
  for (i = 0; i < n -1; i++) {
    for (j = i + 1; j < n; j++) {
      if (d[j] > d[i]) {
        temp = d[j];
        d[j] = d[i];
        d[i] = temp; 
      }
    }
  }
  printf("ソート結果です\n");
  for (i = 0; i < n; i++) {
    printf("%d\n", d[i]);
  }
  return 0;
}
