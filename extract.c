#include<stdio.h>
main()
{
    int n,k;
    printf("enter the number and bit position");
    scanf("%d%d",&n,&k);
    n=n&(1<<k);
    printf("%d",n);
}
