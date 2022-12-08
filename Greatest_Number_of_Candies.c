#include<stdio.h>
int main()
{
    int n,i,max=0,b,c=0;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
        if(max<x[i])
        {
            max=x[i];
        }
    }
    scanf("%d",&b);
    for(i=0;i<n;i++)
    {
        if(x[i]+b>=max)
        {
            printf("True ");
        }
        else
    {
        printf("False ");
    }
    }
   
    
}