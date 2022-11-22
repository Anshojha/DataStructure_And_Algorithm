#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node *insertBST(Node *root, int val)
{
   
        if(root==NULL){
            return new Node(val);
        }   
        if (val < root->data)
        {
            root->left = insertBST(root->left, val);
        }
        else
        {
            root->right = insertBST(root->right, val);
        }
    return root;
}

int main()
{

    return 0;
}