#include<stdio.h>//question 10//table of any number
void main()
{
    int num,table;
    printf("Enter the number whose table to be printed");
    scanf("%d",&num);
    for (int i = 1; i <= 10; i++) {
        int result = num * i;
        printf("\n%d",result);
       
    }
    }
    


