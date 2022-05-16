#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node
{
    int data;
    struct Node *next;
};

// Function to travesrse the linked list

void linkedListTravesral(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

// Case 1 : Deleting the first Element in linked list

struct Node *deleteFirst(struct Node *head)
{
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

// Case 2 : Deleting the Given index Element in linked list

struct Node *deleteAtIndex(struct Node *head, int index)
{
    struct Node *p = head;
    struct Node *q = head->next;
    for(int i=0;i< index-1;i++)
    {
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;

}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocating the memory for nodes in then linked list in heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 3;
    head->next = second;
    // link first to second node
    second->data = 8;
    second->next = third;

    // link second to third node
    third->data = 9;
    third->next = fourth;

    // link third to fourth node
    fourth->data = 10;
    fourth->next = NULL;
    printf("Linked list before deletion\n");
    linkedListTravesral(head);
    // head = deleteFirst(head);

    head = deleteAtIndex(head, 2);

    printf("Linked list after deletion\n");
    linkedListTravesral(head);
    return 0;
}