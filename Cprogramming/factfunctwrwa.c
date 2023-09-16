#include<stdio.h>//with return with arguments
int fact(n);
void main()
{
    int num,facto;
    printf("Enter any number");
    scanf("%d",&num);
    facto=fact(num);
    printf("The factorial of given number is=%d",facto);
}
int fact(n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;

    }
    return fact;
}
