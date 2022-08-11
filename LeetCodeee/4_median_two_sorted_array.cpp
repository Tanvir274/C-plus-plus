#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int arr1[a],arr2[b],arrm[a+b];

    for(int i=0;i<a;i++)
    {
        cin>>arr1[i];
    }
    for(int i=0;i<b;i++)
    {
        cin>>arr2[i];
    }

    int i=0,j=0,t=0;

    while(i<a && j<b)
    {
        if(arr1[i]<arr2[j])
        {
            arrm[t]=arr1[i];
            i++;
            t++;
        }
        else
        {
            arrm[t]=arr2[j];
            j++;
            t++;

        }
    }
    while(i<a)
    {
        arrm[t]=arr1[i];
        i++;
        t++;

    }
    while(j<b)
    {
        arrm[t]=arr2[j];
        j++;
        t++;

    }

    for(int i=0;i<t;i++)
    {
        cout<<arrm[i]<<" ";
    }
    cout<<endl;

    double sum=0, average=0;

    for(int i=0;i<t;i++)
    {
        sum=sum+arrm[i];
    }

    average=sum/t;
    cout<<setprecision(8)<<average;

    cout<<endl;
    return main();

}