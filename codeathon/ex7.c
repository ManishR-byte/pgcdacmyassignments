#include<stdio.h>//2d mATRIX addition of 2 matrices
void main()
{
    int a[2][2],b[2][2],i,j,c[2][2];

    printf("Enter matrix elements");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("----------\n Matrix is-----\n");

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }
    printf("Enter matrix 2 elements");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("\t%d",b[i][j]);
        }
        printf("\n");
    }
    printf("The addition of two matrices is:");

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("\t%d",c[i][j]);

        }
        printf("\n");
    }




}