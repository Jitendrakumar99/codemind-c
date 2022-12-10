#include<stdio.h>
int main()
{
    int n,i;
    int a=0;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
      scanf("%d",&x[i]);  
    }
    for(i=0;i<n;i++)
    {
       if(x[i]%2==0)
       {
           a=a+x[i];
       }
    }
    printf("%d",a);
}