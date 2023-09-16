#include<stdio.h>
void main()
{
    int sale, commission;
    printf("Enter the sale amount");
    scanf("%d",&sale);

    if(sale>1000)
    {
        commission=(15*sale)/100;//if the sale amount is more than 1000 then 15% of commission on sales.
        printf("\nThe commission for the sale is=%d",commission);

    }
    else{
        printf( "No commision");
    }
}