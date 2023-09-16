#include<stdio.h>//printing the even numbers in array
void main()
{
    int i,a[10],size;

    printf("Enter the size of an array");
    scanf("%d",&size);
    

    for(i=0;i<size;i++)
    {
        scanf("\n%d",&a[i]);

    }
    for(i=0;i<size;i++)
    {
        if(a[i]%2==0)
        {
            printf("\n%d",a[i]);
        }
    }
}