#include<iostream>
using namespace std;

int partition(int arr[],int low,int high)
{
    int i,j,t;

    

    for(i=low-1,j=low;j<high;j++)
    {
        if(arr[j]<arr[high])//arrey last value is a pivot value
        {
            i++;
            t=arr[j];
            arr[j]=arr[i];
            arr[i]=t;
        }
    }

    i++;

    t=arr[high];
    arr[high]=arr[i];
    arr[i]=t;
    return i;
}


void quick_sort(int arr[],int low, int high)
{
    if(low>=high)
    {
        return;
    }

    int p=partition(arr,low,high);

    quick_sort(arr,low,p-1);
    quick_sort(arr,p+1,high);
}

int main()
{
    int arr[]={2,10,7,6,15,11,30,14,85,60,40,5,20};

    int n=sizeof(arr)/sizeof(arr[0]);

    quick_sort(arr,0,n-1);

    cout<<"Sorted Array: ";

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}