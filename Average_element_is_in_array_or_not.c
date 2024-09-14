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
    int y,c=0;
    scanf("%d",&y);
    for(int j=0;j<n;j++)
    {
       s=s+x[j];
    }
    for(i=0;i<n;i++)
    {
        if(x[i]==(s/n))
        {
            c=1;
            printf("True");
            break;
        }
    }
    if(c==0)
    {
        printf("False");
    }
}