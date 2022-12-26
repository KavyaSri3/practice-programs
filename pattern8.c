#include<stdio.h>
main()
{
    //int a=100;
    for(int i=1;i<=100;i++)
    {
        printf("%d ",i);
    }
    printf("\n");
    printf(".........");
    printf("\n");
    printf("\n");
    for(int i=10;i<=100;i+=10)
    {
        printf("%d ",i);
    }
    printf("\n");
    printf(".........");
    printf("\n");
    printf("\n");
    for(int i=10;i<100;i=i+10)
    {
        //a=i*10;
        if(i==70)
        {
            break;
        }
        printf("%d ",i);
    }
    printf("\n");
    printf(".........");
    printf("\n");
    printf("\n");
}
