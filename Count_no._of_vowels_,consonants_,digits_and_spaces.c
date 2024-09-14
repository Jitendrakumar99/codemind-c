#include<stdio.h>
int main()
{
    char str[100];
    int i,c=0,d=0,p=0,k=0;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
      if(str[i]==97||str[i]==101||str[i]==105||str[i]==111||
         str[i]==117||str[i]==65||str[i]==69||str[i]==73||
         str[i]==79||str[i]==85)
      {
        c++;
      }
        else if (str[i]>=48&&str[i]<=57)
        {p++; 
        }
        else if(str[i]==' ')
        {
        k++;
        }
        else
        {
            d++;
        }
    }
    
    printf("Vowels: %d
",c);
    printf("Consonants: %d
",d);
     printf("Digits: %d
",p);
     printf("White spaces: %d
",k);
}