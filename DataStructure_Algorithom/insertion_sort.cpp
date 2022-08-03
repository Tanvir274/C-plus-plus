#include<iostream>
using namespace std;
int main()
{
    int i,j,temp,arr[10]={3,2,5,11,15,7,35,39,45,27};

    int n=10;
    for(i=1;i<n;i++)
    {
        temp=arr[i];
        j=i-1;

        while(j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=temp;
    }

    cout<<"Sorted Arrey: ";

    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";

    }
}