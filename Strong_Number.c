#include<stdio.h>
int main()
{
    int n,i,p,r,s1=0;
    scanf("%d",&n);
    p=n;
    while(n!=0)
    { 
        int s=1;
        r=n%10;
        for(i=1;i<=r;i++)
        {
            s=s*i;
        }
        s1=s1+s;
        n=n/10;
    }
    if(p==s1)
    {
    printf("The number %d is a strong number",p);
    }
    else
    {
    printf("The number %d is not a strong number",p);
    }
}