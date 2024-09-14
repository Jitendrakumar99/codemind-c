#include<stdio.h>
int main()
{
    int n,i;
    float s;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    int y,c=0;
    scanf("%d",&y);
    for(int j=0;j<n;j++)
    {
       s=s+x[j];
    }
            printf("%0.2f",(s/n));
    
}