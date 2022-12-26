#include<stdio.h>
main()
{
    float k=10.5;
    float *p=&k;
    printf("%f\n%d\n%d",k,*(int *)p,p);
}
