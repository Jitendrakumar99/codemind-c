#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,b,r,r1,r2,r3,s=0,s1=0,s2=0,s3=0,c=0;
    scanf("%d%d",&n,&a);
    b=n;
    c=a;
    while(n!=0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    while(s!=0&&a!=0)
    {
        r1=s%10;
        s1=s1*10+r1;
        s=s/10;
        a--;
    }
    while(b!=0&&c!=0)
    {
        r2=b%10;
        s2=s2*10+r2;
        b=b/10;
        c--;
    }
    while(s2!=0)
    {
        r3=s2%10;
        s3=s3*10+r3;
        s2=s2/10;
    }
    printf("%d",abs(s3-s1));
    
}