#include<stdio.h>
int main()
{
    int a,b,s;
    scanf("%d%d",&a,&b);
    s=21-(a+b);
    if(s<=10)
    {
        if(21==(a+b+s))
        {
            printf("%d",s);
        }
    }
    else
    {
        printf("-1");
    }
}