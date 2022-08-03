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
    return r;
}

int parent(int i)
{
    int r=i/2;
     return r;
}

void min_heapify(int heap[],int heap_size,int p)
{
    
    int l,r,temp,lowest;
    l=left(p);
    r=right(p);

    if(l<=heap_size && heap[l]<heap[p])
    {
        lowest=l;

    }
    else
    {
        lowest=p;
    }

    if(r<=heap_size && heap[r]<heap[lowest])
    {
        lowest=r;
    }

    if(lowest !=p)
    {
        temp=heap[p];
        heap[p]=heap[lowest];
        heap[lowest]=temp;

        min_heapify(heap,heap_size,lowest);

    }


}

void build_min_heap(int heap[],int heap_size)
{
    
    int i;

    for(i=heap_size/2;i>=1;i--)
    {
        min_heapify(heap,heap_size,i);

    }
}

int  Extract_min(int heap[], int size)
{
    int r;
    if(size>=1)
    {
        r=heap[1];
        heap[1]=heap[size];
        size--;

        min_heapify(heap,size,1);

        return r;
    }
    else
    {
        return 0;
    }
    
}

int insert_node(int heap[],int size,int value)
{
    int i,t,p;
    size +=1;
    heap[size]=value;

    i=size;
    

    while(i>1 && heap[i]<heap[parent(i)])
    {
        p=parent(i);

        t=heap[p];
        heap[p]=heap[i];
        heap[i]=t;

        i=p;


    }

    return size;
}

void increase_key(int heap[],int size,int node,int value)
{
    if(node<=size)
    {
        
        heap[node]=value;

        cout<<endl<<"After Change value Heap: ";
        for(int i=1;i<=size;i++)
        {
            cout<<heap[i]<<" ";
        }

        build_min_heap(heap,size);


    }
}


int main()
{
    int heap[]={0,30,40,7,54,11,23,45,35,50,12,9,21,75};

    int heap_size=sizeof(heap)/sizeof(heap[0]);

    cout<<"Before Heapify :";
    for(int i=1;i<heap_size;i++)
    {
        cout<<heap[i]<<" ";
    }

    build_min_heap(heap,heap_size-1);

    cout<<endl<<"After Heapify (Min Heap) :";
    for(int i=1;i<heap_size;i++)
    {
        cout<<heap[i]<<" ";
    }




    int p=Extract_min(heap,heap_size-1);

     heap_size -=1; //most priority value deque so increase 1 heap size

    cout<<endl<<"Most Priority value (MIN): "<<p<<"; After Priority Data : ";
    for(int i=1;i<heap_size;i++)
    {
        cout<<heap[i]<<" ";
    }

    

    int r=insert_node(heap,heap_size-1,10);

    heap_size=r+1;
    cout<<endl<<"After Insert Value :";
    for(int i=1;i<heap_size;i++)
    {
        cout<<heap[i]<<" ";
    }


    increase_key(heap,heap_size-1,7,1); 

    cout<<endl<<"Aftar change value and Heapify : ";

    for(int i=1;i<heap_size;i++)
    {
        cout<<i<<"-> "<<heap[i]<<" ";
    }

    
}