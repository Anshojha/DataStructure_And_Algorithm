#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Node{
    int data;
    struct Node * Next; 
};

void linkeListTravesral(struct Node *ptr){
    while (ptr!=NULL)
    {
        printf("The element is %d \n",ptr->data);
        ptr= ptr->Next;
    }

    // Case 1
// struct Node * insertAtFirst(struct Node *head, int data){
//     struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
//     ptr->data = data;
 
//     ptr->Next = head;
//     return ptr; 
// }

struct Node * insertAtIndex(struct Node *head, int data , int index){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    struct Node * p = head;
    int i =0;
    while (i!=inedx-1)
    {
        p=ptr->Next;
        i++;
    }
    ptr->data=data;
    ptr->Next=p->Next;
    p->Next=ptr;
    return head;
}

    
// struct Node * insertAtFirst(struct Node *head, int data){
//     struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
//     ptr->Next = head;
//     ptr->data= data;
//     return ptr;
// }

}

int main(){
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;

    head = (struct Node *) malloc(sizeof( struct Node));
    second = (struct Node *) malloc(sizeof( struct Node));
    third = (struct Node *) malloc(sizeof( struct Node));
    fourth = (struct Node *) malloc(sizeof( struct Node));

    head->data=1;
    head->Next=second;

    second->data=2;
    second->Next=third;

    third->data=3;
    third->Next=fourth;

    fourth->data=4;
    fourth->Next=NULL;

    linkeListTravesral(head);
    head = insertAtIndex(head, 0, 2);
    linkeListTravesral(head);
     return 0;
}