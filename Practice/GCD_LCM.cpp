#include<bits/stdc++.h>
using namespace std;

int main()
{
     
    int a,b,lcm;
    cout<<"Enter number: ";
    cin>>a>>b;
    lcm=a*b;

    while(b!=0)
    {
        int mod=a%b;
        a=b;
        b=mod;    
    }
    lcm=(lcm/a);

    cout<<"GCD: "<<a<<"\t"<<"LCM: "<<lcm;
}