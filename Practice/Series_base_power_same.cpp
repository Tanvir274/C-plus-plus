#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int n,result=0;
    cout<<"Enter series length number :";
    cin>>n;

    cout<<"Series:";
    for(int i=1; i<=n;i++)
    {
        result= result+ pow(i,i);
        cout<<i<<"^"<<i;
        if(i<=n-1)
        {
            cout<<" + ";
        }

    }

    cout<<endl<<"Series Sumation: "<<result;


}