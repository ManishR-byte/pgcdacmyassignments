#include<stdio.h>//function without argument and returntype
void arm();
void fact();
void prime();
void main()
{
    //arm();
    //fact();
    prime();

}
void arm()
{
    int num,r,sum=0;
    printf("Enter any number");
    scanf("%d",&num);
    int temp=num;

    while(num>0)
    {
        r=num%10;
        sum=sum+r*r*r;
        num=num/10;

    }
    if(sum==temp)
    {
        printf("The number is armstrong");
    }

}
void fact()
{
    int num,i,fact=1;
    printf("Enter any number");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        fact=fact*i;

    }
    printf("%d",fact);

}
void prime()
{
    int num,i,count=0;
    printf("Enter any number");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            count++;

        }
        }
    if(count>2)
        {
            printf("The number is not prime");
        }
        else{
            printf("The number is prime");
        }
}