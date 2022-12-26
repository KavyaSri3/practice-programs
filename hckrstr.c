#include<stdio.h>
main()
{
    char s[20];
    gets(s);
    int i,len=strlen(s);

    for(i=0;i<len;i++)
    {
        if(s[i]==' ')
        {
            s[i]='\n';
        }
    }
        printf("%s",s);
}
