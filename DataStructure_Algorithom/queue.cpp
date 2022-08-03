#include<iostream>
using namespace std;

int queue[5],size=5, head=0,tail=0;

void Enqueue(int n)
{
    if(tail<size )
    {
        queue[tail]=n;
        tail++;
    }
    else
    {
        cout<<endl<<"Queue is not empty "<<endl;
    }
}
void Dequeue()
{
    if(head<tail-1)
    {
        head++;
    }
    else
    {
        cout<<endl<<"Queue is Empty"<<endl;

    }
}

void Display()
{
  cout<<endl<<"Queue :";
  for(int i=head;i<tail;i++)
  {
     cout<< queue[i]<<" ";
  }
}


int main()
{
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
        Enqueue(i);
        break;
    case 2:
         Dequeue();
         break;
    case 3:
         Display();
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