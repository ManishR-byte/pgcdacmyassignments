#include<stdio.h>//with return without argument
int Add(void);
int main()
{
    int ans;
    ans=Add();
    printf("%d",ans);
}
int Add(void)
{
    int a,b,c;
    printf("Enter the values of a and b:");
    scanf("%d%d",&a,&b);

    c=a+b;
    return c;

}