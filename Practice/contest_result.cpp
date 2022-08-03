#include<iostream>

using namespace std;

int main()
{
    int n,q,result=0,id=0;
    cout<<"Enter Participate Number :";
    cin>>n;
    int arr[n];

    for(int i=0; i<n;i++)
    {
        arr[i]=0;
    }

    cout<<endl<<"How many question :";
    cin>>q;

    int r;
    for(int i=1;i<=q;i++)
    {
        
        cout<<endl<<"Question: "<<i<<", Enter Right Answer Participate id :";
        cin>>r;
        arr[r-1]++;

    }

    for(int i=0;i<n;i++)
    {
        if(arr[i]>result)
        {
            result=arr[i];
            id=i;
        }
    }

    cout<<endl<<"Winning participate id: "<<id+1<<" Markes: "<<result;

    cout<<endl<<"............ Every participate Markes ..........."<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<"Participant id: "<<i+1<<" Markes: "<<arr[i]<<endl;
    }




}