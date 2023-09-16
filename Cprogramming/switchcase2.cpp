#include<iostream>
using namespace std;

int main()
{
    char op;
    cout<<"Enter any operator:'+' '-' '*' '/'";
    cin>>op;
    int num1,num2;
    cout<<"\nEnter the value of num1 and num2 ";

    cin>>num1>>num2;

    switch(op)
    {

        case '+': cout<<num1<<"+"<<num2<<"="<<num1+num2;
               break;

        case '-': cout<<num1<<"-"<<num2<<"="<<num1-num2;
               break;

        case '*': cout<<num1<<"*"<<num2<<"="<<num1*num2;
               break;

            
        case '/' :cout<<num1<<"/"<<num2<<"="<<num1/num2;
               break;             

         default:cout<<"\n End";
         break;      
    }

}