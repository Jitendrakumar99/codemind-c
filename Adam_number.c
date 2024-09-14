#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int r1,r2,r3,s1,s2,sq,sq1;
    sq=n*n;
    while(n)
    {
        r1=n%10;
        s1=s1*10+r1;
        n=n/10;
    }
    sq1=s1*s1;
  while(sq1)
    {
        r2=sq1%10;
        s2=s2*10+r2;
        sq1=sq1/10;
    }
    if(sq==s2)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}