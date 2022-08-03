#include<iostream>
using namespace std;

int main()
{
    int n,r=0,c=1;
    cout<<"How much number: ";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        if(arr[i]==arr[i+1] && arr[i]!=0 && arr[i+1])
        {
            r=arr[i];
        }
        else if(arr[i]>arr[i+1])
        {
            while(c!=0)
            {
                c=arr[i] % arr[i+1];
                r=arr[i] / arr[i+1];
            }
        }
    }
}