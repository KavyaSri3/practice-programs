#include<stdio.h>
void temp_fun(float a)
{
    scanf("%f",&a);
    if(a>32 && a<42)
    {
        printf("Normal hot");
    }
    else if(a>42 && a<70)
    {
        printf("over hot");
    }
    else if(a>70 && a<110)
    {
        printf("Extreme hot");
    }
    else printf("Cold");

}
main()
{
    float a;
    temp_fun(a);
}
