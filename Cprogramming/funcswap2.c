#include<stdio.h>//b

int swap(int*,int *);
void main()
{
    int a,b,c;
    printf("Enter the values of a and b");
    scanf("%d%d",&a,&b);

    c=swap(&a,&b);//swapping the adresses of a and b
    printf("The values of a=%d and b=%d",a,b);
}
int swap(int *x,int *y)
{
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
}