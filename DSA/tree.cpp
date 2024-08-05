#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node* left;
    struct node* right;
};
void preorder( struct node* r)
{
    if(r)
    {
        cout<<r->data<<endl;
        preorder(r->left);
        preorder(r->right);
    }
}

void postorder( struct node* r)
{
    if(r)
    {
        preorder(r->left);
        preorder(r->right);
        cout<<r->data<<endl;
    }
}

void inorder( struct node* r)
{
    if(r)
    {
        preorder(r->left);
        cout<<r->data<<endl;
        preorder(r->right);
    }
}

int main()
{

    return 0;
}