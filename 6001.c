#include <stdio.h>
int main(void){
  struct person {
    char name[32];
    char id[10];
    char sex[10];
    int height;
  }k_person[140]; 
  int i;
  for (i = 0; i < 140; i++) {
    scanf("%s",k_person[i].name);
    scanf("%s",k_person[i].id);
    scanf("%s",k_person[i].sex);
    scanf("%d",&k_person[i].height);
  }
  for (i = 0; i < 140; i++) {
    printf("%s\n",k_person[i].name);
   printf("%s\n",k_person[i].id);
   printf("%s\n",k_person[i].sex);
   printf("%d\n",k_person[i].height);
  }
 return 0;
}
