#include <iostream>
using namespace std;
struct tNode
{
    int data;
    struct tNode *left;
    struct tNode *right;
};

void MorrisTraversal(struct tNode *root)
{
    struct tNode *current, *pre;
    if (root == NULL)
        return;
    current = root;

    while (root)
    {
        if (current->left == NULL)
        {
            cout << current->data << endl;
            current = current->right;
        }
        else
        {
            pre = current->left;
            while (pre->right != NULL && pre->right != current)
            {
                pre = pre->right;
            }

            if (pre->right == NULL)
            {
                pre->right = current;
                current = current->left;
            }
            else
            {
                pre->right = NULL;
                cout << current->data << endl;
                current = current->right;
            }
        }
    }
}

struct tNode *newtNode(int data)
{
    struct tNode *node = new tNode;
    node->data = data;
    node -> left = NULL;
    node -> right = NULL;

    return (node);
};

int main()
{
     struct tNode* root = newtNode(1);
    root->left = newtNode(2);
    root->right = newtNode(3);
    root->left->left = newtNode(4);
    root->left->right = newtNode(5);
 
    MorrisTraversal(root);

    return 0;
}