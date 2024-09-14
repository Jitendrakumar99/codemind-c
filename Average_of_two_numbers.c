#include<stdio.h>
int main()
{
    int a,b;
    float c;
    scanf("%d%d",&a,&b);
    c=float((a+b)*0.5);
    printf("Average of %d and %d is: %0.2f",a,b,c);
}