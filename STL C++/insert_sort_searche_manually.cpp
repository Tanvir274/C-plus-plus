#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={4,88,23,11,17,1,55,33,39,47};

    int temp=0,nf=0, s=sizeof(arr)/sizeof(arr[0]);
    

    for(int i=1;i<s;i++)
    {
        int j=i-1;
        temp=arr[i];
        

        // for(int z=j;z>=0;z--)
        // {
        //     if(arr[z]>temp)
        //     {
        //        arr[j+1]=arr[z];
        //        j--;
        //     }

        // }
        // arr[j+1]= temp;

        while(j>=0 && temp < arr[j])
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
        
        
        
    }

    for(int j=0;j<s;j++)
    {
        cout<<arr[j]<<" ";
    }
    int n,l=0,r=s-1,m;

    cout<<"\nSearch Number: ";
    cin>>n;
    while(l<=r)
    {
        m=(l+r)/2;

        if(arr[m]==n)
        {
            nf=1;

            cout<<"Found the number, Index Number: "<<m+1;
            break;
        }
        else if(arr[m]>n)
        {
            r=m-1;
        }
        else if(arr[m]<n)
        {
            l=m+1;

        }
    }
    if(nf==0)
    {
        cout<<"\nNot Found";
    }
    cout<<"\n";

    return main();

}