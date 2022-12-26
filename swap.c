#include<stdio.h>
main()
{
    int a,b,c;
    printf("enter the no.s");
    scanf("%d%d%d",&a,&b,&c);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("a is %d and b is %d",a,b);
}
