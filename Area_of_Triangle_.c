#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float area,s;
    scanf("%d%d%d",&a,&b,&c);
    s=(a+b+c)*0.5;
    area=sqrt((float)s*(s-a)*(s-b)*(s-c));
    printf("%0.2f",area);
}