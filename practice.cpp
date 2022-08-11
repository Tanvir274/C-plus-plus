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
//     q->tail=(q->tail+1) % (size+1); 

// }

// void dequeue(qu *q)
// {
//     if(q->head==q->tail)
//     {
//         cout<<"Queue is empty";
//     }
//     q->head=(q->head+1)%(size+1);
// }


// int main()
// {
//     qu q1;
//     q1.head=0;
//     q1.tail=0;
//     enqueue(&q1,5);
//     enqueue(&q1,6);
//     enqueue(&q1,7);
//     enqueue(&q1,8);

//     for(int i=q1.head;i<q1.tail;i++)
//     {
//         cout<<q1.arr[i]<<"\t";
//     }
//     dequeue(&q1);
//     cout<<endl;
//     for(int i=q1.head;i<q1.tail;i++)
//     {
//         cout<<q1.arr[i]<<"\t";
//     }
// }



// int main()
// {
//     int arr[10]={3,35,6,11,7,3,8,4,7,9};

//     for(int i=1;i<10;i++)
//     {
//         int item=arr[i];

//         int j=i-1;

//         while(j>=0 && arr[j]>item)
//         {
//             arr[j+1]=arr[j];
//             j=j-1;
//         }

//         arr[j+1]=item;
//     }

//     for(int i=0;i<10;i++)
//     {
//         cout<<arr[i]<<"\t";
//     }
// }


// typedef struct 
// {
//   int node;
//   bst* left;
//   bst* right;
// }bst;

// bst* Head=NULL;

// void insert_bst(int value)
// {
//     bst* new_node=(bst*) malloc(sizeof(bst));
//     new_node->node=value;
//     new_node->left=NULL;
//     new_node->right=NULL;

//     if(Head==NULL)
//     {
//         Head=new_node;
//         return;
//     }
//     bst *ptr=Head;
//     while(ptr !=NULL)
//     {
//         if(ptr->node>new_node->node)
//         {
//             ptr=ptr->left;
//         }
//         if(ptr->node<new_node->node)
//         {
//             ptr=ptr->right;
//         }

//     }

//     if(ptr->node<new_node->node)
//     {
//         ptr->right=new_node;
//     }
//     else
//     {
//         ptr->left=new_node;

//     }
    

// }

// void Display(bst* root)
// {
//     //Inorder Traverse
//     if(root->left !=NULL)
//     {
//         Display(root->left);
//     }
//     cout<<root->data<<" ";
//     if(root->right !=NULL)
//     {
//         Display(root->right);
//     }

// }

// int main()
// {
//     insert_bst(5);
//     insert_bst(6);
//     insert_bst(7);
//     insert_bst(9);
//     insert_bst(4);
//     insert_bst(2);

//     Display(Head);


// }

int main()
{
    int arr[10]={0};

    int n=0;

    arr[n++]=1;
    arr[n++]=1;
    arr[n++]=1;
    cout<<n<<endl;

    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<"\t";
    }


}