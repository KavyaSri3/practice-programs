#include<stdio.h>
main()
{
    for(int i=0;i<=3;i++)
    {

        for(int j=i;j<=3;j++)
    {
        printf("* ");
    }
    printf("\n");
    }
    printf("\n");
    printf("..................");
    printf("\n");
    printf("\n");
    for(int i=0;i<=3;i++)
    {

        for(int j=0;j<=i;j++)
    {
        printf("* ");
    }
    printf("\n");
    }
}
