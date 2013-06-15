#include <stdio.h>
#define NUM 40
typedef struct student {
  char name[20];
  int age;
}student_t;
void young(student_t*);
int main(void){
   student_t student[NUM];
   student_t *p;
   p = student;
   int i;
   for (i = 0; i < NUM; i++) {
     scanf("%s",student[i].name);
     scanf("%d",&student[i].age);
   }
   young(p);
   return 0;
}

void young(student_t *p){
  int i;
  student_t tmp;
  tmp.age = 1000;
  for (i = 0; i < NUM; i++) {
    if (tmp.age > (p+i)->age) {
      tmp.age = (p+i)->age;
      printf("%d\n", tmp.age);
    }
  }
  for (i = 0; i < NUM; i++) {
    if (tmp.age == (p+i)->age) {
      printf("%s\n", (p+i)->name);
    }
  }
}
