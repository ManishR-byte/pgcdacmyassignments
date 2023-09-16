#include<stdio.h>//Program for converting degree to farhneit
void main()
{
    float c,f,cel, far;//variables 
    int q;

    printf("\npress 1 to convert farhneit to celsius:");
    printf("\npress 2 to convert celsius to farhneit");
   
    printf("\nEnter the choice");
    scanf("%d",&q);

    switch(q)
    {
        case 1: 
        printf("Enter the temprature in farhneit");
        scanf("%f",&f);
        cel=(f-32)/1.8;
        printf("\n Temprature in celsius:%f",cel);
        break;

        case 2:
        printf("Enter the temprature in celsius");
        scanf("%f",&c);
        far=c*1.8+32;
        printf("\n Temprature in farhneit=%d",far);
        break;

        default:
        printf("\n Wrong input");
        break;
        
    }
}
