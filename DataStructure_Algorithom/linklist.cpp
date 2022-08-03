#include<iostream>
using namespace std;

typedef struct linklist Node;

struct linklist
{
    int data;
    Node *next;
};

Node *create_node(int item, Node *next)
{
    Node *new_node=(Node *) malloc(sizeof(Node));

    if(new_node==NULL)
    {
        cout<<"Node not created";
        
    }
    new_node->data=item;
    new_node->next=next;

    return new_node;
}

int main()
{
    Node *n;

    n=create_node(5,NULL);
    cout<<"Create Node: "<<n->data;
}

