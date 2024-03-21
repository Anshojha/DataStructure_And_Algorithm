#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void inserAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void inserAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}

void inserAtPos(Node *&head, Node *tail, int pos, int d)
{
    if (pos == 1)
    {
        inserAtHead(head, d);
        return;
    }
    Node *temp = head;
    int cnt = 1;
    Node *newNode = new Node(d);
    while (cnt < pos - 1)
    {
        temp = temp->next;
        cnt++;
    }

    if (temp->next == NULL)
    {
        inserAtTail(tail, d);
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

void printLL(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void deleteNode(Node *head, Node *tail, int pos)
{
    if (pos == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node *temp = head;
        Node *prev = NULL;
        int cnt = 1;
        while (cnt < pos)
        {
            prev = temp;
            temp = temp->next;
            cnt++;
        }
        if (prev->next = NULL)
        {
        }

        prev->next = temp->next;
        delete temp;
    }
}

Node * reverseLindkedList(Node* head)
{
    if (head == NULL || head->next != NULL)
    {
        return head;
    }

    Node *curr = head;
    Node *prev = NULL;
    Node *forward = NULL;
    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    head = prev;
    return head;
}





int main()
{

    Node *node1 = new Node(25);
    Node *tail = node1;
    cout << node1->data << endl;
    cout << node1->next << endl;
    printLL(node1);
    inserAtTail(tail, 12);
    inserAtTail(tail, 13);
    inserAtTail(tail, 14);
    inserAtTail(tail, 15);
    inserAtTail(tail, 16);
    cout << endl;
    // inserAtHead(node1, 13);
    // printLL(node1);
    // inserAtHead(node1, 14);
    // printLL(node1);
    // inserAtHead(node1, 15);
    printLL(node1);
    // inserAtPos(node1, tail, 3, 1);
    // inserAtPos(node1, tail, 8, 90);
    // inserAtPos(node1, tail, 9, 100);
    // inserAtPos(node1, tail, 10, 100);
    // inserAtPos(node1, tail, 4, 100);
    // cout << endl;
    // printLL(node1);
    // cout << endl;
    // deleteNode(node1, tail, 14);
    // cout << "Head -> " << node1->data << endl;
    // cout << "Tail -> " << tail->data << endl;
    // // deleteNode(node1, 1);
    // printLL(node1);
    // cout << endl;
    // cout << "Head -> " << node1->data << endl;
    // cout << "Tail -> " << tail->data << endl;
     reverseLindkedList(node1);
     cout<<endl;
    cout << "Printing After Reversing" << endl;
     printLL(node1);
    return 0;
}