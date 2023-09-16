#include<stdio.h>//getting the sum of elements in an array
void main()
{
    int i, n,a[5],sum=0,k;
 
 printf("Enter the size of an array");
 scanf("%d",&n);

 for(i=0;i<5;i++)
 {
    scanf("%d",&a[i]);
 }
for(i=0; i<5;i++)
{

    printf("\t%d",a[i]);
    sum=sum+a[i];
}
printf("Enter the index at which you want its element");
scanf("%d",&k);

printf("The number is");
for(i=0;i<n;i++)
{
    if(i==k)
    {
        printf("%d",a[i]);
    }
}
printf("\nsum of array=%d",sum);
}