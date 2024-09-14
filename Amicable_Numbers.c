#include<stdio.h>
int main()
{
    int a,b,s=0,s1=0;
    scanf("%d %d",&a,&b);
    for(int i=1;i<a;i++)
    {
        if(a%i==0)
        {
            s=s+i;
        }
        if(b%i==0)
        {
            s1=s1+i;
        }
    }
    if(s==b&&s1==a)
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
}