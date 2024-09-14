#include<stdio.h>
int main()
{
    int n,i,t=0,j;
    float d=0;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<n;i++)
    {
         for(j=i+1;j<n;j++)
      {
         if(x[i]>x[j])
         {
             t=x[i];
             x[i]=x[j];
             x[j]=t;
         }
      }
    }
    for(i=0;i<n;i++)
    {
        if(i>=1&&i<=(n-2))
        {
            d=d+x[i];
        }
    }
    printf("%0.5f",d/(n-2.0));
    
}