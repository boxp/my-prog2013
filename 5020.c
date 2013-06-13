#include <stdio.h>
int main(void){
  int m[5]; 
  int *m_p;
  m_p = m;
  int i;
  for (i = 0; i < 5; i++) {
    scanf("%d",m_p+i);
  }
  m_p = &m[0];
  for (i = 0; i < 5; i++) {
    printf("%d\n", *(m_p + i));
  }
  return 0;
}
