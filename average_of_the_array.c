#include<stdio.h>
int main()
{
    int n,i;
    float a=0;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
      scanf("%d",&x[i]);  
    }
    for(i=0;i<n;i++)
    {
       a=(a+x[i]); 
    }
    printf("%0.2f",a/n);
}