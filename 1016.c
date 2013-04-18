#include<stdio.h>
main()
{
    int a=3, b=5, c, d;
    c = a++;
    c += 2;
    d = b == c;
    printf("%d / %d / %d / %d", a, b, c, d );
}
