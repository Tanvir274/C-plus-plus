#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n,d,c;

    cout<<"Enter the number :";
    cin>>n;
    d=sqrt(n)+1;
    int divisor[n/2+1],ndivisor=0;

    for(int i=1; i<=d;i++)
    {
      if(n%i==0)
      {
         c=n/i;
         divisor[ndivisor++]=i;
         divisor[ndivisor++]=c;

      }  
    }

    cout<<"Divisors: ";
    for(int i=0;i<ndivisor;i++)
    {
        cout<<divisor[i]<<" ";
    }

}