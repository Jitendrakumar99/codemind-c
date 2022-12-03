#include<stdio.h>
int main()
{
    int n,a,r,s=0,a1,s1=0,r1;
    scanf("%d",&n);
    a=n*n;
    while(n!=0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    a1=s*s;
    while(a1!=0)
    {
        r1=a1%10;
        s1=s1*10+r1;
        a1=a1/10;
    }
    if(a==s1)
    {
        printf("True");
    }
    else
{
    printf("False");
}
    
    
}