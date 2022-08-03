#include<bits/stdc++.h>
using namespace std;

struct linklist
{
    int data;
    struct linklist* next;
};

linklist* head;

void insert_data(int value)
{
    linklist* node=(linklist*) malloc(sizeof(linklist));

    node->data=value;
    node->next=NULL;

    if(head==NULL || head->data> node->data)
    {
        node->next=head;
        head=node;
    }
    else
    {
        linklist *pre_node=head,*temp=head->next;
        

        while(temp !=NULL && temp->data<value )
        {
            pre_node=temp;
            temp=temp->next;

        }

        pre_node->next=node;
        node->next=temp;
        
        
    }

    
}

void print()
{
    
    linklist *p=head;

    while(p !=NULL)
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

}