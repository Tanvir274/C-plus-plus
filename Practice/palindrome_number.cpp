#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number :";
    cin>>n;
    cout<<"palindrome Number :";

    for(int i=1;i<=n;i++)
    {
        int l=i,sum=0,c;
        while(l>0)
        {
            c=l%10;
            sum=(sum*10)+c;
            l=l/10;

        }
        
        if(i==sum)
        {
            cout<<sum<<" ";

        }

    }
}