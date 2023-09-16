#include<stdio.h>//Finding the greatest of all numbers

void main()
{
    int i, a[10],size;

    printf("\nEnter the size of an array");
    scanf("%d",&size);

    for(i=0;i<size;i++)
    {
        scanf("\n%d",&a[i]);

    }
    int max=a[0];
    for(i=1;i<size;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
 
        }
        printf("The greatest of all numbers is%d",max);

    }

