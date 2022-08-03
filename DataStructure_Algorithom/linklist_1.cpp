#include<bits/stdc++.h>
using namespace std;

struct linklist
{
    int data;
    struct linklist* next;
    
};

linklist* head;


linklist insert_data(int value)
{
    linklist* node= (linklist*) malloc(sizeof(linklist));

    node->data=value;
    node->next=NULL;
    if(head==NULL)
    {
        head=node;
    }
    else
    {
        linklist *temp;

        temp=head;
        while(temp->next != NULL)
        {
            temp=temp->next;
        }

        temp->next=node;

    }
   
}

void delete_node(int node)
{
    linklist* temp=head;
    linklist* temp_pre;

    
    if(temp->data==node)
    {
        temp=temp->next;
        free(head);
        head=temp;

    }
    else
    {
        while(temp->data !=node)
        {
            temp_pre=temp;
            temp=temp->next;
        }
        if(temp->next==NULL)
        {
            temp_pre->next= NULL;
            free(temp);
        }
        else
        {
            temp_pre->next= temp->next;
            free(temp);
        }
      
    }
   
}


void print()
{
    linklist *p=head;

    while(p != NULL)
    {
        cout<<p->data<<"\t";
        p=p->next;
    }
}




int main()
{
    head=NULL;
    insert_data(3);
    insert_data(7);
    insert_data(31);
    insert_data(14);
    insert_data(23);
    insert_data(2);
    insert_data(12);
    insert_data(13);
    
    print();
    delete_node(3);
    cout<<endl;
    print();


}