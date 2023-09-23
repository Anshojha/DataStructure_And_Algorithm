#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

void printDoublLL(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "  ";
        temp = temp->next;
    }
    cout << endl;
}

int getLength(Node *head)
{
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

void inserAtHead(Node *&tail, Node *&head, int data)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else
    {
        Node *newNode = new Node(data);
        newNode->next = head;
        newNode->prev = NULL;
        head = newNode;
    }
}

void insertAtTail(Node *&tail, Node *&head, int data)
{
    Node *newNode = new Node(data);
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void insertAtAny(Node *&head, Node *&tail, int position, int data)
{
    if (position == 1)
    {
        inserAtHead(tail, head, data);
        return;
    }
    else
    {
        Node *temp = head;
        int cnt = 1;
        while (cnt < position - 1)
        {
            temp = temp->next;
            cnt++;
        }
        if (temp->next == NULL)
        {
            insertAtTail(tail, head, data);
            return;
        }

        Node *newNode = new Node(data);
        newNode->next = temp->next;
        temp->next->prev = newNode;
        temp->next = newNode;
        newNode->prev = temp;
    }
}

void deleteNode(int position, Node *&head , Node *& tail)
{
    if (position == 1)
    {
        Node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        tail = head;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node *curr = head;
        Node *prev = curr;
        int cnt = 1;
        while (cnt < position - 1)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
       curr -> prev = NULL;
       prev -> next = curr -> next;
       tail = prev;
       curr -> next = NULL;
        delete curr;
    }
}

int main()
{
    Node *node1 = new Node(14);
    Node *head = node1;
    Node *tail = node1;
    cout << getLength(head);
    cout << endl;
    printDoublLL(head);
    cout << "head -> " << head->data << endl;
    cout << "tail -> " << tail->data << endl;
    inserAtHead(tail, head, 13);
    inserAtHead(tail, head, 12);
    inserAtHead(tail, head, 11);
    printDoublLL(head);
    cout << "head -> " << head->data << endl;
    cout << "tail -> " << tail->data << endl;
    inserAtHead(tail, head, 14);
    inserAtHead(tail, head, 15);
    cout << "head -> " << head->data << endl;
    cout << "tail -> " << tail->data << endl;
    insertAtTail(tail, head, 20);
    printDoublLL(head);
    cout << "head -> " << head->data << endl;
    cout << "tail -> " << tail->data << endl;
    // cout << getLe/ngth(head);
    insertAtTail(tail, head, 21);
    // cout << getLength(head);
    cout << endl;
    printDoublLL(head);
    insertAtAny(head, tail, 2, 100);
    // cout << getLength(head);
    cout << endl;
    printDoublLL(head);
    insertAtAny(head, tail, 9, 900);
    cout << getLength(head);
    cout << endl;
    printDoublLL(head);
    insertAtAny(head, tail, 10, 800);
    // cout << getLength(head);
    cout << endl;
    printDoublLL(head);
    cout << "head -> " << head->data << endl;
    cout << "tail -> " << tail->data << endl;

    deleteNode(1, head , tail);
    cout << endl;
    printDoublLL(head);
    cout << "head -> " << head->data << endl;
    cout << "tail -> " << tail->data << endl;
    deleteNode(3, head , tail);
    cout << "Length ->" << getLength(head);
    cout<<endl;
    printDoublLL(head);
    deleteNode(9, head , tail);
    cout << "head -> " << head->data << endl;
    cout << "tail -> " << tail->data << endl;
    cout << "Length ->" << getLength(head) <<endl; 
    printDoublLL(head);
    deleteNode(9, head , tail);
    cout << "head -> " << head->data << endl;
    cout << "tail -> " << tail->data << endl;
    printDoublLL(head);
    cout << "Length ->" << getLength(head) <<endl; 
    deleteNode(8, head , tail);
    cout << "head -> " << head->data << endl;
    cout << "tail -> " << tail->data << endl;
    printDoublLL(head);
    cout << "Length ->" << getLength(head) <<endl; 
    return 0;
}