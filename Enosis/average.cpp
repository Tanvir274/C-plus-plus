#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10]={2,54,643,54,76,44,23,47,99,1};

    int Min=arr[0], Max=arr[0];
    double sum=0;

    for(int i=0;i<10;i++)
    {
        sum=sum+arr[i];

        // if(arr[i]<min)
        // {
        //     min=arr[i];
        // }
        // if(arr[i]>max)
        // {
        //     max=arr[i];
        // }

        Min=min(Min,arr[i]);
        Max=max(Max,arr[i]);

    }

    double avg=sum/10;

    cout<<avg<<"\t"<<Min<<"\t"<<Max;
}