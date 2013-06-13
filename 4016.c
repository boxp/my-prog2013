#include <stdio.h>
#include <stdlib.h>
int main(void){
  int x[20];
  int seed,i;
  scanf("%d",&seed);
  srand(seed);
  for (i = 0; i < 20; i++) {
    x[i] = rand()%100;
  }
  for (i = 0; i < 20; i++) {
    printf("%d\n", x[i]);
  }
  return 0;
}
