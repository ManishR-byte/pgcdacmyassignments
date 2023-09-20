#include<iostream>//product of a 3 digit number
using namespace std;

//int main(){
//int d1,d2,d3,product,num;
//cout<<"Enter a number";
//cin>>num;

//d1=num%10;
//num=num/10;
//d2=num%10;
//num=num/10;
//d3=num;

//product=d1*d2*d3;
//cout<<"\n product of digits of given numbers is"<<product;

//}
int main(){
    int num,i,rem,product,sum=0;
    cout<<"Enter any number";
cin>>num;
while(i<=num){
    int i=1;
    rem=num%10;
    product=sum+rem*rem*rem;
    num=num/10;
}
cout<<product;
}
