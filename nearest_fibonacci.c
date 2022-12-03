#include<stdio.h>
int fib(int n)
{
    int a=0,b=1,c,ct=0,i;
    for(i=1;i<=n;i++)
    {
        c=a+b;
        if(c==n)
        {
            ct++;
        }
        a=b;
        b=c;
    }
    if(ct==0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
 int n,i,d1=0,d2=0,np1=0,np2=0;
 scanf("%d",&n);
 for(i=n;;i++)
 {
 	if(fib(i))
 	{
 		d2=i-n;
 		np1=i;
 		break;
 		
	}
 }
 for(i=n;;i--)
 {
 	if(fib(i))
 	{
 		d1=n-i;
 		np2=i;
 		break;
 		
	}
 }
 
 if(d1<d2)
 {
 	printf("%d
",np2);
 }
 else if(d1>d2)
 {
 	printf("%d
",np1);
 }
 else
 {
 	printf("%d %d
",np2,np1);
 }
	
}


