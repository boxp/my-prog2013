#include <stdio.h>
int main(void){
  int n;
  scanf("%d",&n);
  if (n%3==0) {
    printf("zero\n");
  }else if (n%3==1) {
    printf("one\n");
  }else if (n%3==2) {
    printf("two\n");
  }
    return 0;
}
