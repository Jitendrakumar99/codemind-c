#include<stdio.h>
int main()
{
    int n,x[10],i,r=0,c=0;
    scanf("%d",&n);
    for(i=0;i<10;i++)
    {
       x[i]=0; 
    }
    while(n!=0)
    {
        r=n%10;
        x[r]=x[r]+1;
        n=n/10;
    }
    for(i=0;i<10;i++)
    {
        if(x[i]>1)
        {
            printf("Not Unique Number");
            c++;
            break;
        }
    }
    if(c==0)
    {
        printf("Unique Number");
    }
}