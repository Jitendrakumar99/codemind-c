#include<stdio.h>
int main()
{
    int n,k=0,i,j,c=0;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(j=0;j<n;j++)
    {
        for(i=j+1;i<n;i++)
        {
           if(x[i]==x[j])
           {
               c++;
           }
        }
    }
    printf("%d",n+c);
}