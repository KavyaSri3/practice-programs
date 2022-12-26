#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=0; i<10; i=i+1)
    {
        if(i!=5)
        {
            printf("* ");
            for(j=i; j<5; j=j+1)
            {
                printf("# ");
            }
        }
        printf("\n");
        if(i>=5)
        {
             printf("* ");
            for(j=i; j>5; j=j--)
            {
                printf("# ");
            }
        }
    }

     for(i=0; i<10; i=i+1)
    {
        if(i!=5)
        {
            printf("* ");
            for(j=0; j<i; j++)
            {
                printf("# ");
            }
        }
        printf("\n");
    }

}
