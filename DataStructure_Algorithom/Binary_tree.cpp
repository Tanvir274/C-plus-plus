#include<iostream>
using namespace std;

typedef struct Binary_tree Tree;


struct Binary_tree 
{
    int data;
    Tree* left;
    Tree* right;
};

Tree *create_node(int value)
{
    Tree *new_node=(Tree *) malloc(sizeof(Tree));

    if(new_node==NULL)
    {
        cout<<"Node not create";
        
    }
     
    new_node->data=value;
    new_node->left=NULL;
    new_node->right=NULL;

    return new_node;

}

void add_left_child(Tree *head, Tree *child)
{
    head->left=child;
}

void add_right_child(Tree *head, Tree *child)
{
    head->right=child;
}

Tree *Create_tree()
{
    Tree *two=create_node(2);
    Tree *seven=create_node(7);
    Tree *nine=create_node(9);
    Tree *one=create_node(1);
    Tree *six=create_node(6);
    Tree *fourteen=create_node(14);
    Tree *eleven=create_node(11);
    Tree *five=create_node(5);
    Tree *four=create_node(4);
    Tree *three=create_node(3);
    Tree *ten=create_node(10);

    add_left_child(two,seven);
    add_right_child(two,nine);

    add_left_child(seven,one);
    add_right_child(seven,six);

    add_left_child(nine,fourteen);
    add_right_child(nine,eleven);

    add_left_child(one,five);
    add_right_child(one,ten);

    add_left_child(six,three);
    add_right_child(six,four);
    
    return two;

}

void Pre_Display(Tree *root)
{
    //Preorder Traverse
    cout<<root->data<<" ";
    if(root->left !=NULL)
    {
        Pre_Display(root->left);
    }
    if(root->right !=NULL)
    {
        Pre_Display(root->right);
    }

}

void print(int n)
{
   cout << n<<" "; 
}

void Post_Display(Tree *root)
{
    //Postorder Traverse
    if(root->left !=NULL)
    {
        Post_Display(root->left);
    }
    if(root->right !=NULL)
    {
        Post_Display(root->right);
    }

    cout<<root->data<<" ";
    //print(root->data);

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
    Tree *root=Create_tree();
    
    cout<<"Preorder: ";
    Pre_Display(root);


    cout<<endl<<"Postorder: ";
    Post_Display(root);

    cout<<endl<<"Postorder: ";
    Inorder_Display(root);
    
}



