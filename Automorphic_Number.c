#include<stdio.h>
int main()
{
    int n,p,r,s=0,r1,s2=0,c=0,a,r2;
    scanf("%d",&n);
    p=n;
    a=n*n;
    while(n!=0)
    {
        c++;
        r=n%10;
        n=n/10;
    }
  
      while(c>0)
    {
        r1=a%10;
        s=s*10+r1;
        a=a/10;
        c--;
    }
     while(s!=0)
    {
        r2=s%10;
        s2=s2*10+r2;
        s=s/10;
    }
    if(s2==p)
    {
        printf("Automorphic Number");
    }
    else
    {
        printf("Not an Automorphic Number");
    }
    
    
}