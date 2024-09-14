#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int c=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            c=c+i;
        }
    }
    if(c>n)
    {
        printf("True");
        }
        else
        {
            printf("False");
        }
}