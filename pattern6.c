#include<stdio.h>
main()
{
    int a=5;
    for(int i=a;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            if((i==1&&j==1)||(i==2&&j==2)||(i==3&&j==3)||(i==4&&j==4)||(i==5&&j==5))
            {
                printf("%d ",j);
            }
        }
        printf("\n");
    }
}
