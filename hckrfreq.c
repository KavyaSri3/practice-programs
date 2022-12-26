#include<stdio.h>
main()
{
    char s[3000];
    int i,count=0;
    scanf("%s",s);
    for(i=0;i!='\0';i++)
    {
        if(s[i]>='0'&&s[i]<='9')
        {
            count++;
        }
    }
    printf("%d",count);
}
