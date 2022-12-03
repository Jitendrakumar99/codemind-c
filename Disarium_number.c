#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,s=0,p,c=0,r1,s1=0,b,i,t;
    scanf("%d",&n);
    p=n;
    b=n;
    
    while(n!=0)
    { 
        c++;
        r=n%10;
        n=n/10;
    }
 while(p!=0||c!=0)
    {
       r1=p%10;
       s1=s1+pow(r1,c);
       p=p/10;
        c--;
       
    }
    if(s1==b)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}