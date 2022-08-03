#include<bits/stdc++.h>
using namespace std;

int arr3[50];

int main()
{
    int l1, l2;
    cin>>l1>>l2;

    int arr1[l1], arr2[l2];

    cout<<endl<<"Arrey 1: ";
    for(int i=0;i<l1;i++)
    {
        cin>>arr1[i];
    }
    cout<<endl<<"Arrey 2: ";
    for(int i=0;i<l2;i++)
    {
        cin>>arr2[i];
    }
    
    int carry=0;
    int sum=0;

    if(l1>=l2)
    {
        

        for(int i=0;i<l1;i++)
        {
            
            if(l2>i)
            {
                sum=arr1[i]+arr2[i]+carry;
               
                arr3[i]=sum%10;
                carry=sum/10;


            }
            else
            {
               sum=arr1[i]+carry;
               
                arr3[i]=sum%10;
                carry=sum/10;
            }
            

        }

        for(int i=0;i<l1;i++)
        {
            cout<<arr3[i];
        }
        if(carry>0)
        {
            cout<<carry;
        }

    }
    else
    {
        for(int i=0;i<l1;i++)
        {
            
            if(l1>i)
            {
                sum=arr1[i]+arr2[i]+carry;
               
                arr3[i]=sum%10;
                carry=sum/10;


            }
            else
            {
               sum=arr1[i]+carry;
               
                arr3[i]=sum%10;
                carry=sum/10;
            }
            

        }
        for(int i=0;i<l2;i++)
        {
            cout<<arr3[i];
        }
        if(carry>0)
        {
            cout<<carry;
        }

    }

}