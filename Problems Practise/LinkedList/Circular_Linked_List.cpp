#include <iostream>
#include <map>
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

    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "Memory is free foe node with data " << value << endl;
    }
};

void insertNode(Node *&tail, int element, int d)
{
    if (tail == NULL)
    {
        Node *newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        Node *curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        }

        Node *newNode = new Node(d);
        newNode->next = curr->next;
        curr->next = newNode;
    }
}

void print(Node *&tail)
{
    Node *temp = tail;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (tail != temp);
}

void deleteNode(Node *&tail, int value)
{
   if(tail == NULL){
    cout<<"The list is empty plz try to add the node and delete it"<<endl;
    return;
   }
   else{
    Node *prev = tail;
    Node *curr = prev->next;

    while(curr -> data != value){
        prev = curr;
        curr = prev->next;
    }

    prev -> next = curr->next;
    curr -> next = NULL;
    delete curr;
   }
}



bool isCircularList(Node *head ){
    if(head == NULL){
        return true;
    }
    Node *temp = head->next;
    while(temp != NULL && temp->next != head){
        temp = temp->next;
    }

    if(temp == head){
        return true;
    }

    return false;

}

bool detectLoop(Node *head){
    if(head == NULL){
        return false;
    }
    map<Node*,bool> visited;
    Node *temp = head;

    while(temp != NULL){

        if(visited[temp]==true){
            return 1;
        }
        visited[temp] = true;
        temp = temp -> next;
    }

    return false;
}



Node * floyedCycleDetectionLoop(Node *head){
    if(head == NULL){
        return NULL;
    }
    Node *slow = head;
    Node *fast = head;
    while(slow != NULL && fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast -> next;
        }

        slow = slow -> next;
        if(slow == fast){
            return slow;
        }
    }
    return NULL;
}



Node* getStarting(Node *head){
    if(head == NULL){
        return NULL;
    }
    Node *interSection = floyedCycleDetectionLoop(head);
    Node *slow = head;
    while(slow != interSection){
        slow = slow->next;
        interSection = interSection->next;
    }
   return slow;

}


void removeLoop(Node *head){
    if(head == NULL){
        return;
    }
    Node *startOfLoop = getStarting(head);
    Node *temp = startOfLoop;
    while(temp != startOfLoop){
        temp = temp->next;
    }
    temp -> next = NULL;
}


int main()
{
    Node *tail = NULL;
    insertNode(tail, 5, 1);
    insertNode(tail, 1, 2);
    insertNode(tail, 2, 3);
    insertNode(tail, 2, 5);
    insertNode(tail, 5, 9);
    insertNode(tail, 3, 10);
    // // print(tail);
    cout<<endl;
    // deleteNode(tail , 5);
    // print(tail);
    // cout<<endl;
    // deleteNode(tail , 10);
    print(tail);
    cout<<endl;
    if (isCircularList(tail))
    {
        cout<<"The list circular in nature!!";
    }
    else{
        cout<<"the list not in circular nature";
    }
    
    return 0;
}