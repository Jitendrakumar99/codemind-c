#include<stdio.h>
int main()
{
    int n,c=0;
    scanf("%d",&n);
    int x[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    int k;
    scanf("%d",&k);
    for(int j=0;j<n;j++)
    {
        if(x[j]<=k)
        {
            c++;
        }
        else
        {
            c=c+2;
        }
    }
    printf("%d",c);
}