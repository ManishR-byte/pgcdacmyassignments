#include<stdio.h>//printing first and last character of string
#include<string.h>
int main()
{
    
    char str[15],i;
    int len=0;
    printf("\nEnter any string");
    scanf("%s",&str);
    len=strlen(str);
    for( i=0;str[i]!='\0';i++)
    {
        if(i==0||i==len-1)
        {
            printf("%c",str[i]);
        }

    }

}