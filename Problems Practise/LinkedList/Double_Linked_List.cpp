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

void inserAtHead(Node * &head , int data){
    Node * newNode = new Node(data);
    newNode->next = head;
    newNode->prev = NULL;
    head = newNode;
}

void insertAtTail(Node * &tail , int data){
    Node * newNode = new Node(data);
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;


}

int main()
{
    Node *node1 = new Node(12);
    Node *head = node1;
    printDoublLL(head);
    inserAtHead(head , 13);
    cout << getLength(head);
    cout<<endl;
    printDoublLL(head);
    inser                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            
    return 0;
}   