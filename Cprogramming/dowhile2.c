#include<stdio.h>
void main()
{
    int num,target=1;
    printf("Enter the numeber from which you want reverse");
    scanf("%d",&num);

    do{
        printf("\n%d",num);
        num--;
    }while(num>=target);

}