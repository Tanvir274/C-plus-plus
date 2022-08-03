#include<iostream>
using namespace std;
int main()
{
    int n, arr[]={1,3,5,7,11,14,17,19,21,25,28,29,33,37,38,40,45,49};

    cout<<"Enter the number: ";
    cin>>n;
    int res=-1, left=0,right=(sizeof(arr)/sizeof(arr[0]))-1,middle;

    
    while(left<=right)
    {
        middle=(left+right)/2;
        if(arr[middle]==n)
        {
            res=middle;
            break;
        }
        else if(arr[middle]>n)
        {
            right=middle-1;
        }
        else
        {
            left=middle+1;
        }
    }
    if(res>-1)
    {
        cout<<"Foud this number, index number is "<<res<<endl<<endl;
    }
    else
    {
        cout<<"Not Found this number"<<endl<<endl;

    }

    return main();

    
}