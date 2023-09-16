#include<stdio.h>
void main()
{
    int num, rev=0, rem,temp;
    printf("Enter any number");
    scanf("%d",&num);
temp=num;
    do{
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;

    }while(num>0);
if(rev==temp)
{
    printf("The number is palindrome");

}
else{
    printf("The number is not palindrome");
}
}