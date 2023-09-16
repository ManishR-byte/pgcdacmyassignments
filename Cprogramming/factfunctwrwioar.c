#include<stdio.h>//without return with arguments
void fact(int );//declaration
void main()
{
    int num;
    printf("Enter a number");
    scanf("%d",&num);
    fact(num);

  
}
void fact(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("The factorial is %d",fact);
}