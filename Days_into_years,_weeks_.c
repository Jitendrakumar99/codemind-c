#include<stdio.h>
int main()
{
    int d,y,w;
    scanf("%d",&d);
    y=d/365;
    d=d%365;
    w=d/7;
    printf("%d
%d
",y,w);
}