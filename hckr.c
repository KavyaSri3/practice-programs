#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d",&n);
    int a[n];
    int p[n],q[n],r[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            p[i]=a[i]&a[j];
            printf("%d & %d is %d\n",a[i],a[j],p[i]);
            q[i]=a[i]|a[j];
            printf("%d | %d is %d\n",a[i],a[j],q[i]);
            r[i]=a[i]^a[j];
            printf("%d ^ %d is %d\n",a[i],a[j],r[i]);
            printf("\n");

            if(p[i]<p[j])
            {
                int temp=p[i];
                p[i]=p[j];
                p[j]=temp;

            }
            if(q[i]<q[j])
            {
                int temp=q[i];
                q[i]=q[j];
                q[j]=temp;

            }
            if(r[i]<r[j])
            {
                int temp=r[i];
                r[i]=r[j];
                r[j]=temp;

            }

        }
    }
    for(int i=1; i<=n; i++)
    {
        printf("%d\n",p[i]);
    }
    printf("\n");
    for(int i=1; i<=n; i++)
    {
        printf("%d\n",q[i]);
    }
    printf("\n");
    for(int i=1; i<=n; i++)
    {
        printf("%d\n",r[i]);
    }
    printf("\n");
    printf("\n Max Value of & is %d\n",p[1]);
    printf("\n Max Value of | is %d\n",q[1]);
    printf("\n Max Value of ^ is %d\n",r[1]);
}
