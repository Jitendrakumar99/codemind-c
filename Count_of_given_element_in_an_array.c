#include<stdio.h>
int main()
{
    int n,i,s=0;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
   int y;
   scanf("%d",&y);
    for(i=0;i<n;i++)
    {
        if(x[i]==y)
        {
            s++;
        }
    }
    
        printf("%d",s);
    
}