#include<stdio.h>
int main()
{
    int n,i,j,c=0,ct=0,cas=0;
    float sum=0;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=1;i<100;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(i==x[j])
            {
                c++;
            }
        }
        if(i==c)
        {
           sum=sum+i;
           ct++;
           cas=1;
        }
    }
    if(cas==1)
    {
        printf("%0.2f",((sum)/ct));
    }
    else
    {
        printf("-1");
    }
}