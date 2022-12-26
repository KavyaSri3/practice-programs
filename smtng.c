#include<stdio.h>
#define pi 3
#undef pi 3.14
main()
{
    int a=1;
    float pi;
    float b=pi*a;
    printf("%f",b);
}
