#include<iostream>
using namespace std;

int main()
{
    int min_index,i,j,temp;
    int arr[11]={3,44,41,5,15,26,10,25,1,46,35};

    int n=11;//sizeof(arr);

    for(i=0;i<n-1;i++)
    {
        min_index=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[min_index]>arr[j])
            {
                min_index=j;
            }
        }
        if(i!=min_index)
        {
            temp=arr[i];
            arr[i]=arr[min_index];
            arr[min_index]=temp;
        }
    }

    cout<<"Sorted Array: ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    
}