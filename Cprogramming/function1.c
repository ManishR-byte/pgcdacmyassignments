#include<stdio.h>//function by using without arguments and returntype.
void add();//declaring a function
void main()
{
    add();
}
void add()
{
    int a,b,c;
    printf("\nEnter the values of 2 nos");
    scanf("\n%d%d",&a,&b);

    c=a+b;
    
    printf("The addition of two nos is%d",c);
}


