#include<stdio.h>
int main()
{
    int a,b,n;
    scanf("%d%d%d",&n,&a,&b);
    if(((a*1)+(b*2))>=n)
    {
        printf("Qualify");
    }
    else
    {
        printf("Not Qualify");
    }
}