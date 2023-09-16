#include<stdio.h>// The program to calculate discount
void main()
{
    int totalAm, purchase;
    printf("\nEnter the purchase amount\n");
    scanf("%d",&purchase);
    
    if(purchase>1500)
    {
        totalAm= purchase-200;//calculating discount amount
        printf("The total amount is=%d",totalAm);

    }
    else{
        printf("No discount");
    }
}