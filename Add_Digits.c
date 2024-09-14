#include<stdio.h>
int main()
{
    int n,r,s=0;
    scanf("%d",&n);
    while(n)
    {
        r=n%10;
        s=n/10;
        if((s+r)<9)
        {
            printf("%d",s+r);
            break;
        }
        else
        {
            n=s+r;
        }
    }
}