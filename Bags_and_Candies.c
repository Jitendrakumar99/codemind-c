#include<stdio.h>
int main()
{
    int n,a,b,x;
    scanf("%d%d%d",&n,&a,&b);
    x=a*b;
    if(n%x==0)
    {
        printf("%d",n/x);
    }
    else if(n%x!=0)
    {
        printf("%d",n/x+1);
    }
}