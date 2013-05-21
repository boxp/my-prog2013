#include <stdio.h>
#include <math.h>
#include <limits.h>
int main(void){
  int d[10];
  double m, v, s;
  int n = 10, max, min;
  int i;
  double sum;
  max = -INT_MAX;
  min = INT_MAX;


  printf("データを%d個入力してください\n",n);
  for (i = 0; i < n; i++) {
    printf("data %d = ", i+1);
    scanf("%d",&d[i]);
  }


  for (sum = 0.0,i = 0; i < n; i++) {
    sum += d[i];
  }

  m = sum / n;

  for (i = 0; i < n; i++) {
    sum += (d[i] - m) * (d[i] - m );
  }
  v = sum / n;
  s = sqrt(v);

  for (i = 0; i < n; i++) {
    if(d[i] > max)
      max = d[i];
    if(d[i] < min)
      min = d[i];
  }

  printf("最大値   =%d\n", max);
  printf("最小値   =%d\n", min);
  printf("平均     =%10.3f\n", m);
  printf("分散     =%10.3f\n", v);
  printf("標準偏差 =%10.3f\n", s);
  return 0;
}

