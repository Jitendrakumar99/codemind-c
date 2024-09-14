#include<stdio.h>
#include<math.h>
int main()
{
    int p,r,t;
    scanf("%d%d%d",&p,&r,&t);
   float ci=(p*pow((1+r*0.01),t))-p;
    printf("%0.2f",ci);
}