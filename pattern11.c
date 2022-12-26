#include<stdio.h>
main()
{
    int a=3;
    for(int i=5;i>=1;i--)
    {
        for(int j=5;j>=i;j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}
