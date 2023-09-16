#include<stdio.h>
void main()
{
    int num=1,target;
    printf("\nEnter the number till which you want to print:");
    scanf("%d",&target);

    do{
        
        
        if(num%2==0)
        {
            printf("\n%d",num);
        }
      num++;//incrementing the number
        
    }while(num<=target);
}