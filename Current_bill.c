#include<stdio.h>
int main()
{
    int u;
    float uc,s,b;
    scanf("%d",&u);
    if(u<199)
    {
        uc=1.20;
    }
    else if(u>=200&&u<400)
    {
        uc=1.50;
    }
     else if(u>=400&&u<600)
    {
        uc=1.80;
    }
    else
    {
        uc=2.00;
    }
    if(u<400)
    {
        b=u*uc+100;
        printf("%0.2f",b);
    }
    else
    {
        s=u*uc*0.15;
        b=u*uc+s;
        printf("%0.2f",b);
    }
}