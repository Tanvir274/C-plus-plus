#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[]={11,2,3,47,5,6,7,8,9,19};
    int size= sizeof(arr)/sizeof(arr[0]);
    
    sort(arr,arr+size, greater<int>());
    
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    
}