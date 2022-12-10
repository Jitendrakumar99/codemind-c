#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    int a,b=0;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
      scanf("%d",&x[i]);  
    }
    scanf("%d",&a);
    for(i=0;i<n;i++)
    {
       if(a==x[i])
       {
           printf("True");
           b++;
           break;
       }
    }
    if(b==0)
    {
        printf("False");
    }
   
}