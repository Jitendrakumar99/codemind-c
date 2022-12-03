#include<stdio.h>
int main()
{
    int n,r=0,s=0,ct=0,t;
    scanf("%d",&n);
    while(n)
    {
       t=n%10;
        r=r*10+t;
        n=n/10;
    }
     while(r)
    {
        if(r%10==6&&ct==0)
        {
            s=(s*10)+9;
            ct++;
        }
         else
         {
            s=(s*10)+(r%10); 
         }
         r=r/10;
    }
    printf("%d",s);
    
}