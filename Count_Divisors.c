#include<stdio.h>
int main()
{
    int a,b,c,i,ct=0;
    scanf("%d%d%d",&a,&b,&c);
    for(i=a;i<=b;i++)
    {
        if(i%c==0)
        {
            ct++;
        }
    }
    printf("%d",ct);
}