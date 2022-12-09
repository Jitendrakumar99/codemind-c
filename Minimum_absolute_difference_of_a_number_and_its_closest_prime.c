#include<stdio.h>
#include<math.h>
int prime(int n)
{
    int i,c=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n,i,p,d=0,d1=0,a,b,t=0,t1=0;
    scanf("%d",&n);
    p=n;
    for(i=n;;i++)
    {
        if(prime(i))
        {
            d=i-n;
            break;
        }
    }
      for(i=n;;i--)
    {
        if(prime(i))
        {
            d1=n-i;
            break;
        }
    }
    if(d>d1)
    {
        printf("%d",d1);
    }
    else
    {
        printf("%d",d);
    }
    
}