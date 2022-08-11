#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "Journal Dev reverse example"; 
    reverse(str.begin(), str.end()); 
    cout<<str<<endl;

    int arr[10]={1,4,2,5,7,8,11,43,21,12};
    reverse(arr,arr+10);

    for(auto x: arr)
    {
        cout<<x<<"\t";
    }

    string b="Bangladesh";
    reverse(b.begin(),b.end());
    cout<<endl<<b;
    return 0;
    
}