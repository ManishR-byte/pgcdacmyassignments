#include<stdio.h>//without return without arguments
void swap();
void main()
{
    swap();

}
void swap()
{
    int a,b;
    printf("\nEnter the values of a and b");
    scanf("%d%d",&a,&b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("\nswapped numbers a=%d,b=%d",a,b);
}