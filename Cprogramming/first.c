#include<stdio.h>
void main()
{
    int a,b;
    printf("\nEnter the values of a and b\n");
    scanf("%d%d",&a, &b);

    if(a>b)
    {
        printf("a is greater than b");

    }
    else{
        printf("b is greater than a");
    }
}