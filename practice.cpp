#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//     char ch;
//     cin>>ch;

//     int c=int(ch)-32;
//     cout<<char(c)<<endl;

//     int arr[10]={0};

//     for(int i=0;i<10;i++)
//     {
//         cout<<arr[i]<<"\t";
//     }

//     cout<<endl;
//     int t=10 , f=0;

//     for(int i=0;i<20;i++)
//     {
//         if(t>=2)
//         {
//             cout<<t<<"\t";
//             t--;

//         }
//         else
//         {
//             cout<<f<<"\t";
//             f++;

//         }
//     }

// }
// #define size 10

// struct qu
// {
//     int arr[size+1];
//     int head, tail;
   
// };

// void enqueue(qu *q,int value)
// {
//     if((q->tail+1)%(size+1)==q->head)
//     {
//         cout<<"queue is a full";
//         return;
//     }
//     q->arr[q->tail]=value;
//     q->tail=(q->tail+1) % (size+1) 


// }


// int main()
// {
//     qu q1;
//     q1.head=0;
//     q1.tail=0;
//     enqueue(&q1,5);

//     cout<<q1->

// }

int main()
{
    int arr[10]={3,35,6,11,7,3,8,4,7,9};

    for(int i=1;i<10;i++)
    {
        int item=arr[i];

        int j=i-1;

        while(j>=0 && arr[j]>item)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }

        arr[j+1]=item;
    }

    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<"\t";
    }
}