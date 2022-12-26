#include<stdio.h>
main()
{
    int i,j,a=5,b=5;
    for(i=0;i<=a;i++)
    {
        for(j=i;j<=i+b;j++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
     printf("\n");
    printf(".........");
    printf("\n");
    printf("\n");
    for(i=0;i<=a;i++)
    {
        for(j=i;j<=b+i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}

