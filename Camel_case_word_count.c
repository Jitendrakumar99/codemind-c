#include<stdio.h>
int main()
{
    char str[100];
    scanf("%[^
]s",str);
    int c=1,i;
    for(i=1;str[i]!=NULL;i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
        {
            c++;
        }
    }
    printf("%d",c);
    
}