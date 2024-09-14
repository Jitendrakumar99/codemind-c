#include<stdio.h>
int pal(int);
int main()
{
    int i,n,v,v1,d,d1;
    scanf("%d",&n);
    for(i=n+1;;i++)
    {
        if(pal(i))
        {
            d=i-n;
            v=i;
            break;
        }
    }
    for(i=n-1;;i--)
    {
        if(pal(i))
        {
            d1=n-i;
            v1=i;
            break;
        }
    }
    if(d>d1)
    {
        printf("%d",v1);
    }
    else if(d1>d)
    {
        printf("%d",v);
    }
    else
    printf("%d %d",v1,v);
    
}
int pal(int n)
{
    int r,s=0,p;
    p=n;
    while(n!=0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    if(p==s)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}