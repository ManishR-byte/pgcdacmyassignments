#include<stdio.h>//with return with argument
int prime(int);
void main()
{
    int num, Isprime;
   printf("Enter any number");
   scanf("%d",&num);
   Isprime= prime(num);

   if(Isprime==1)
   {
    printf("The number is prime");
   }
   else{
    printf("no prime no");
   }

    
}
int prime(int n)
{
    int i,count=0;
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }    
    if(count==1)
    {
       // printf("\n Prime no ");
       return 1;

    }
    else
    {
        return 0;
    }


}