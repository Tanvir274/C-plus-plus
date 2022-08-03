#include<iostream>
using namespace std;

int main()
{
    int i,j,temp,carry,count=0;
    int arr[10]={5,3,10,45,11,35,27,2,9,15};
    int n=10;

    for(i=0;i<n;i++)
    {
        
        for(j=0;j<n-i-1;j++) // n-1-i use decrease the loop function work
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                
            }
        }
        
    }
    cout<<"Sorted Array :";
    for(i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<count;
}