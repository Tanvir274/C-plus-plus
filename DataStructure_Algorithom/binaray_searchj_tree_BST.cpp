#include<iostream>
using namespace std;

typedef struct binaray_search_tree_BST Tree;

 
struct binaray_search_tree_BST
{
    int data;
    Tree* left;
    Tree* right; 

};

Tree* create_node(int value)
{
    Tree *new_node= (Tree *) malloc(sizeof(Tree));

    if(new_node==NULL)
    {
        cout<<endl<<"New node not create";
    }

    new_node->data=value;
    new_node->left=NULL;
    new_node->right=NULL;

    return new_node;
}
void add_left_chiled(Tree *head,Tree *child)
{
    head->left=child;

}

void add_right_chiled(Tree *head,Tree *child)
{
    head->right=child;

}

Tree *insert_node()
{
    Tree *fiften=create_node(15);
    Tree *thirteen=create_node(13);
    Tree *twenty=create_node(20);
    Tree *ten=create_node(10);
    Tree *ninteen=create_node(19);
    Tree *fourteen=create_node(14);
    Tree *twentythree=create_node(23);
    Tree *nine=create_node(9);
    Tree *Tweleve=create_node(12);
    Tree *Eighteen =create_node(18);



    add_left_chiled(fiften,thirteen);
    add_right_chiled(fiften,twenty);
    add_left_chiled(thirteen,ten);
    add_right_chiled(thirteen,fourteen);

    add_left_chiled(twenty,ninteen);
    add_right_chiled(twenty,twentythree);

    add_left_chiled(ten,nine);
    add_right_chiled(ten,Tweleve);

    add_left_chiled(ninteen,Eighteen);

    return fiften;


}

void binary_search(Tree *root,int node)
{
    

    if(root != NULL && root->data==node)
    {
        cout<<endl<<"Founded this Node";

        exit(1);

    }
    else if(root != NULL && root->data>node)
    {
        root=root->left;
        //cout<<endl<<"ok L :"<<root->data;
        binary_search(root,node);
    }
    else if(root != NULL && root->data<node)
    {
        root=root->right;
        //cout<<endl<<"ok R: "<<root->data;
        binary_search(root,node);
    }
    else
    {
        cout<<endl<<"This Node is not found";
    }
}

Tree *BST_insert(Tree *root, Tree *node)
{
    if(root==NULL)
    {
        root->data=node->data;
        root->left=NULL;
        root->right=NULL;

        return root;
    }
    Tree *parent_node,*current_node;
    parent_node=NULL;
    current_node=root;

    while(current_node !=NULL)
    {
        parent_node=current_node;

        if(current_node->data>node->data)
        {
            current_node=current_node->left;
        }
        if(current_node->data<node->data)
        {
            current_node=current_node->right;
        }
    }

    if(parent_node->data<node->data)
    {
        add_right_chiled(parent_node,node);
        
    }
    else if(parent_node->data>node->data);
    {
        add_left_chiled(parent_node,node);
    }

    return root;

}

void Inorder_Display(Tree *root)
{
    //Inorder Traverse
    if(root->left !=NULL)
    {
        Inorder_Display(root->left);
    }
    cout<<root->data<<" ";
    if(root->right !=NULL)
    {
        Inorder_Display(root->right);
    }

}

int main()
{
    
    Tree *fiftyfive, *root=insert_node();
    fiftyfive->data=55;
    fiftyfive->left=NULL;
    fiftyfive->right=NULL;

    cout<<root->data;

    binary_search(root,11);
    
    BST_insert(root,fiftyfive);

    cout<<endl<<"Show Tree in oder display: ";

    Inorder_Display(root);

}