#include <iostream>
using namespace std;

struct node
{
    int data;

    node *left;
    node *right;

    node(int data)
    {
        this->data = data;
        left = NULL;
        right - NULL;
    }
};

void print(node *root)
{
    if(root == NULL) return;
    print(root -> left);
    cout<<root -> data << " ";
    print(root -> right);
}

int main()
{

    node *root = new node(5);
    root->left = new node(3);
    root->right = new node(7);
    root->left->left = new node(2);
    root->left->right = new node(4);
    root->right->left = new node(6);
    root->right->right = new node(8);

    print(root);
    return 0;
}