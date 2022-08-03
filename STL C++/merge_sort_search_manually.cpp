#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int left,int mid,int right)
{
    int left_size,right_size;
    left_size=(mid-left)+1;
    right_size=right-mid;

    int left_arr[left_size],right_arr[right_size];

    for(int i=0;i<left_size;i++)
    {
        left_arr[i]=arr[left+i];
    }

    for(int i=0;i<right_size;i++)
    {
        right_arr[i]=arr[mid+1+i];
    }

    int l=0,r=0,c=left;

    while(l<left_size && r<right_size)
    {
        if(left_arr[l]<=right_arr[r])
        {
            arr[c]=left_arr[l];
            l++;
        }
        else
        {
            arr[c]=right_arr[r];
            r++;

        }
        c++;
    }

    while(l<left_size)
    {
        arr[c]=left_arr[l];
        l++;
        c++;
    }

    while(r<right_size)
    {
        arr[c]=right_arr[r];
        c++;
        r++;
    }

}

void merge_sort(int arr[],int left, int right)
{
    if(left>=right)
    {
        return;
    }

    int mid= left+(right-left)/2;

    merge_sort(arr,left,mid);
    merge_sort(arr,mid+1,right);

    merge(arr,left,mid,right);

}

int main()
{
    int arr[]={4,88,23,11,17,1,55,33,39,47};

    int  s=sizeof(arr)/sizeof(arr[0]);

    merge_sort(arr,0,s-1);
    


    for(int j=0;j<s;j++)
    {
        cout<<arr[j]<<" ";
    }
    int n,l=0,r=s-1,nf=0,m;

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