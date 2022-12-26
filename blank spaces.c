#include<stdio.h>
main()
{
   char a[30];
   int i;
   for(i=0;i<30;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<30;i++)
   {
       if(a[i]==""||a[i]==" ")
       {
           a[i]=a[i]<<1;
       }
           printf("%s",a[i]);

   }
}
