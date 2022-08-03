#include<iostream>

using namespace std;

#define size 5

//FIFO
typedef struct 
{
    int arr[size+1];
    int head,tail;
}queue;


void Enqueue(queue *q,int n)
{
    if((q->tail+1)%(size+1)==q->head)
    {
        cout<<"Queue is full";
        return;
    }
    q->arr[q->tail]=n;
    q->tail=(q->tail+1)%(size+1);
}
void Dequeue (queue *q)
{
    if(q->head==q->tail)
    {
        cout<<"Queue is Empty :";
        return;
    }
    q->head=(q->head+1)%(size+1);
}
void Display(queue *q)
{
  cout<<endl<<"Queue :";
  if(q->tail>q->head)
  {
    for(int i=q->head;i<q->tail;i++)
    {
      cout<< q->arr[i]<<" ";
    }
  }
  else
  {
     for(int i=q->head;i<=size;i++)
     {
      cout<< q->arr[i]<<" ";
     } 
     for(int i=0;i<q->tail;i++)
     {
      cout<< q->arr[i]<<" ";
     }
  }  
}


int main()
{
    queue q1;
    q1.head=0;
    q1.tail=0;
    int n;
    while(n!=4)
    {
        cout<<endl<<"1 ->Enqueue "<<endl<< "2 ->Dequeue "
        <<endl<<"3 ->Display "<<endl<<"4 ->Stop"<<endl
        <<"Enter your Choice :";

        cin>>n;
        int i;

            switch (n)
            {
            case 1:
                cout<<"Enque: ";
                cin>>i;
                Enqueue(&q1,i);
                break;
            case 2:
                Dequeue(&q1);
                break;
            case 3:
                Display(&q1);
                break; 
            case 4:
                cout<<"Exit";
                break;         
            default:
                cout<<"Enter Right Input";
                break;
            }
    }

} 
