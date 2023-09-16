#include<stdio.h>//divisibility by given numbers.
void main()
{
    int num;
    printf("Enter any number");
    scanf("%d",&num);

    if(num%8==0 && num%5==0)
    {
        printf("The number is divisible by 8 and 5");
    }
    else if(num%8==0)
    {
        printf("The number is divisible by 8");
    }
    else if(num%5==0)
    {
        printf("The number is divisible by 5");
    }
    else{
        printf("The number is neither divisible by 5 nor 8");
    }
}