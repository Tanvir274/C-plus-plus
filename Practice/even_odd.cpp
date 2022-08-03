#include<iostream>
using namespace std;

int main()
{
    int n, even[101];
    for(int i=0;i<101;i++)
    {
        even[i]=0;
    }
    for(int i=0;i<101;i+=2)
    {
        even[i]=2;
    }
    cout<<"Enter the number:";
    cin>>n;

    

    if(even[n])
    {
        cout<<"Your Number is Even ";
    }
    else
    {
        cout<<"Your number is odd";
    }

    /*int i=3;
    cout<<"check";
    for(int j=i*i;j<=101;j+=i*2)
    {
        cout<<j<<endl;

    }*/
}