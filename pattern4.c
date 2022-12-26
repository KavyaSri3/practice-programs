#include<stdio.h>
main()
{
    int a=3;
    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    printf("\n");
    printf("................");
    printf("\n");
    printf("\n");
    for(int i=a;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    printf("\n");
    printf("................");
    printf("\n");
    printf("\n");

     for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
    printf("\n");
    printf("..................");
    printf("\n");
    printf("\n");
    for(int i=a;i>=1;i--)
     {
         for(int j=i;j<=a;j++)
         {
             printf("%d ",i);
         }
         printf("\n");
     }
}
