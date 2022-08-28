#include<iostream>
using namespace std;

void merge(int arr[],int left,int mid,int right)
{
    //cout<<endl<<"3rd Yes";
    
    int  left_size,right_size;

    left_size=(mid-left)+1;
    right_size=right-mid;

    int arr_l[left_size], arr_r[right_size];

    for (int i = 0; i < left_size; i++)
    {
        arr_l[i]=arr[left+i];
    }
    for (int  i = 0; i < right_size; i++)
    {
        arr_r[i]=arr[mid+1+i];
    }

    int i,j,k;
    i=0;
    j=0;
    k=left;
    

    while(i<left_size && j<right_size )
    {
        if(arr_l[i]<=arr_r[j])
        {
            arr[k]=arr_l[i];
            i++;
        }
        else
        {
            arr[k]=arr_r[j];
            j++;

        }
        k++;
    }

    while(i<left_size)
    {
        arr[k]=arr_l[i];
        i++;
        k++;
    }
    while(j<right_size)
    {
        arr[k]=arr_r[j];
        j++;
        k++;
    }
    
}


void merge_sort(int arr[],int left,int right)
{
    
    if(left>=right)
    { 
        return;   
    }
    
    

    int mid=left+(right-left)/2;
    cout<<endl<<"1st ";
    merge_sort(arr,left,mid);
    cout<<endl<<"2nd ";
    merge_sort(arr,mid+1,right);
    
    cout<<endl<<"3rd ";
    merge(arr,left,mid,right);

}

int main()
{

    int arr[]={7,9,2,5,11,25,1,35,40,17,80,89,43,21,3,10,27};

    int i, n=sizeof(arr)/sizeof(arr[0]);
    
    merge_sort(arr,0,n-1);

    cout<<endl<<" Sorted Arrey: ";

    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}