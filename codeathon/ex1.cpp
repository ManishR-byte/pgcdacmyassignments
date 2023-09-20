#include<iostream>//question no.3
using namespace std;


int main()
 {
    int num,i,j,n1,n2,count;
    cout<<"\nEnter the range between to get prime no";
    cin>>n1>>n2;

    for(i=n1;i<=n2;i++)
    {
        count=0;
        for(j=1;j<=n2;j++)
        {
            if(i%j==0)
            
                count++;
            
        }
        if(count==2)
        {
            cout<<"\n"<<i;
        }

       
    }
   
 }