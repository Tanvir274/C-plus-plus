#include<iostream>
using namespace std;

typedef struct linklist Node;

struct linklist
{
    int data;
    Node *next;
};

Node *create_node(Node** head,int item)
{
    Node *new_node=(Node *) malloc(sizeof(Node));

    if(new_node==NULL)
    {
        cout<<"Node not created";
        
    }

    new_node->data=item;
    
    new_node->next=(*head);
    (*head)=new_node;
    
   

    
    //cout<<endl<<(*head)->data<<" "<<new_node->data;
    return new_node;
}

Node* delete_node(Node** head, int node)
{
    Node *current_node=*head,*prev;

    if(current_node!=NULL && current_node->data==node)
    {
        *head=current_node->next;
        free(current_node);
        return *head;
    }
    

    while(current_node !=NULL && current_node->data !=node)
    {
        prev=current_node;
        current_node=current_node->next;
    }
    if(current_node==NULL)
    {
        return *head;
    }

    prev->next=current_node->next;
    free(current_node);
    return *head;

}
void Display(Node* head)
{
    Node* current_node=head;
    cout<<endl<<"List Of Data :";
    while(current_node !=NULL)
    {
        cout<<current_node->data<<" ";
        current_node=current_node->next;
    }
    cout<<endl;
    
}

int main()
{
    /*
    Node* head=NULL;
    
    int n,i;

    cout<<endl<<"1:Insert Value ";
    cout<<endl<<"2:Delete value ";
    cout<<endl<<"3:Display Data list ";
    cout<<endl<<"4:Exit/End";
    cout<<endl<<"Enter your choice:";
    cin>>n;

    switch (n)
    {
    case 1:
        int l;
        cout<<"How many value you want insert";
        cin>>l;
        while(l!=0)
        {
        cout<<"Enter your value: ";
        cin>>i;
        create_node(&head,i);
        l--;       
        }
        break;
    case 2:
        //cout<<"Delete value: ";
        //cin>>i;
        //d=&i;
        //int d=5;
        delete_node(&head,5);
        break;
    case 3:
        Display(head);
        break;        
    case 4:
        cout<<"Exit";
        break;
    default:
        cout<<"Enter right Input ";
        break;
    }*/
    
    Node* head=NULL;
    

    create_node(&head,1);
    create_node(&head,5);
    
    create_node(&head,3);
    create_node(&head,8);
    create_node(&head,11);
    create_node(&head,7);
    create_node(&head,27);
    Display(head);
    delete_node(&head,5);

    Display(head);

    
}
