#include<stdio.h>
#define n 50
void main()
{
    int i,size,a[n];
    
 printf("Enter the size of array");
 scanf("%d",&size);
    printf("\nEnter the elements in an array");

    for(i=0;i<size;i++)
    {
        scanf("\n%d",&a[i]);

    }
    for(i=0;i<size;i++)
    {
        printf("\n%d",a[i]);
    }

    printf("\n%d",a[i]);

}