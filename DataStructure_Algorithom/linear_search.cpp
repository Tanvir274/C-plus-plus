#include<iostream>
using namespace std;

int linear_search(int arr[], int n,int x)
{
    for(int i=0;i<x;i++)
    {
        if(arr[i]==n)
        {
            return i;
        }
        
    }
    return -1;

}


int main()
{
    int n, arr[]={2,5,20,7,50,40,100,80,85,70};

    cout<<"Enter search number :";
    cin>>n;
    int res=linear_search(arr,n,sizeof(arr));
    if(res>-1)
    {
        cout<<"Foud this number, index number is "<<res;
    }
    else
    {
        cout<<"Not Found this number";

    } 

    

}