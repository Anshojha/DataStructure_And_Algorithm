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

    if (root == NULL)
    {
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

// Code to print in inorder form

void inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
   
    inorder(root->right);
}

// Code to print in postorder form
void postorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->right);
    cout << root->data << " ";
 
    postorder(root->left);
}


Node* minValue(Node* root){
    Node* temp1 = root;


    while(temp1 -> left != NULL){
        temp1 = temp1 -> left;
    }
    return temp1;
}

Node* maxValue(Node* root){
    Node* temp1 = root;


    while(temp1 -> right != NULL){
        temp1 = temp1 -> right;
    }
    return temp1;
}
int main()
{

    Node *root = NULL;
    root = insertBST(root, 5);
    insertBST(root, 1);
    insertBST(root, 3);
    insertBST(root, 4);
    insertBST(root, 2);
    insertBST(root, 7);
    cout<<"inorder -> ";
    inorder(root);
    cout << endl;
    cout<<"PostOrder ->";
    postorder(root);
    cout << endl;
    cout<<"MinValue -> ";
    cout<<minValue(root)->data;
    cout<<endl;
    cout<<"maxValue -> ";
    cout<<maxValue(root)->data;
    return 0;
}