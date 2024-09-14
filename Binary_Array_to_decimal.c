#include<stdio.h>
int main()
{
    int n,i,c=1,s=0;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=n-1;i>=0;i--)
    {
        s=s+x[i]*c;
        c=c*2;
    }

        printf("%d",s);
    
    
}