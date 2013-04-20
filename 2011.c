#include <stdio.h>
int main(void){
    char c;
    scanf("%c", &c);
    switch (c) {
        case 'a':
            printf("apple\n");
            break;
        case 'b':
            printf("banana\n");
            break;
        case 'c':
            printf("cherry\n");
            break;
        default:
            printf("grape\n");
            break;

    }
    return 0;
}
