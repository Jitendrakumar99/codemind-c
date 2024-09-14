#include<stdio.h>
int main()
{
    int t,s,b;
    float kb;
    scanf("%d%d%d",&t,&b,&s);
    kb=(2*t*s*b*512)/1024;
    printf("%0.0f KB",kb);
}