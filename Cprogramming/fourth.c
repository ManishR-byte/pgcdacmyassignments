#include<stdio.h>//comparison of 3 numbers
void main()
{
    int a,b,c;

    printf("\nEnter the values of a, b and c\n");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b)
    {

        if(a>c)
        {
            printf("a is greatest=%d",a);

        }
        else{
            printf("c is greatest=%d",b);
        }
    }
    else{
        if(b>c)
        {
            printf("b is greatest");
        }
        else{
            printf("c is greatest");
        }
    }

}


    
       