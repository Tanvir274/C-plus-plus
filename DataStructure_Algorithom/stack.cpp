#include<iostream>
using namespace std;
#define MAX 100

//LIFO
typedef struct 
{
    int top;
    int arr[50];
}STACK;

void push(STACK* s, int value)
{
    if(s->top<MAX)
    {
        s->arr[s->top]=value;
        s->top=s->top+1;
        cout<<endl<<"Stack the Data";
    }
    else
    {
        cout<<endl<<"Stack is full";
    }
}
int pop(STACK* s)
{
    if(s->top>0)
    {
        s->top=s->top-1;
        cout<<endl<<"Pop the data";
        return s->arr[s->top];

    }
    else
    {
        cout<<endl<<"Stack is Empty";
    }
}


int main()
{
     
    /*int n;
    cout<<"Enter data for push or  Enter -1 for stop push data:";
    for(int i;i<Max;i++)
    {
        cin>>n
        if(n==-1)
        {
            break;
        }
        else
        {
            push(n);

        }

    }
    cout<<""*/

    push(1);
    push(2);
    push(3);

    pop();
    

    
}
