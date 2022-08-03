#include<iostream>
using namespace std;

int left(int i)
{
    int l= 2*i;
    return l;
}

int right(int i)
{
    int r=(2*i)+1;
}

void max_hepify(int heap[],int size,int i)
{
    int l,r,largest_value, temp;
    l=left(i);
    r=right(i);

    if(l<=size && heap[l]>heap[i])
    {
        largest_value=l;
    } 
    else
    {
        largest_value=i;
    }

    if(r<=size && heap[r]>heap[largest_value])
    {
        largest_value=r;
    }


    if(largest_value != i)
    {
        temp=heap[i];
        heap[i]=heap[largest_value];
        heap[largest_value]=temp;

        max_hepify(heap,size,largest_value);
        
    }
}

void build_max_heap(int heap[],int size)
{
    int i;

    for(i=size/2; i>=1;i--)
    {
        max_hepify(heap,size,i);
    }
}




int main()
{
    int heap[]={0,6,3,7,5,9,4,11,15,25,8,17};

    int heap_size=sizeof(heap)/sizeof(heap[0]);

    cout<<"Before Heapify :";
    for(int i=1;i<heap_size;i++)
    {
        cout<<heap[i]<<" ";
    }


    build_max_heap(heap,heap_size-1);

    cout<<endl<<" After Hepify : ";

    for(int i=1;i<heap_size;i++)
    {
        cout<<heap[i]<<" ";
    }

}