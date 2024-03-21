#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

node *buideTrre(node *root)
{
    cout << "Enter the data:" << endl;
    int data;
    cin >> data;
    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter the data to for left tree-> " << data << endl;
    root->left = buideTrre(root->left);

    cout << "Enter the data for the right -> " << data << endl;
    root->right = buideTrre(root->right);

    return root;
}

void levelOrderTraversal(node *root){
 queue<node*>q;
 

}

    int main()
{

    node *root = NULL;

    root = buideTrre(root);

    return 0;
}