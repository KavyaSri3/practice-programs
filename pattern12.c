#include<stdio.h>
main()
{
    int a=3;
    for(int i=5;i>=1;i--)
    {
        for(int j=i;j>=1;j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}
