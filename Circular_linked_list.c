#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node
{
    int data;
    char name[10];
    struct Node *next;
};

// Function to travesrse the linked list

void linkedListTravesral(struct Node *head)
{
    struct Node *ptr = head;
    printf("Element is %d\n", ptr->data);
    ptr = ptr->next;
    while (ptr != head)
    {
        printf("Element is %d\n", ptr->data);
        ptr = ptr->next;
    }
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

    head->data = 7;

    head->next = second;
    // link first to second node
    second->data = 8;

    second->next = third;

    // link second to third node
    third->data = 9;

    third->next = fourth;

    // link third to fourth node
    fourth->data = 10;

    fourth->next = head;

    // Calling the function to traverse

    linkedListTravesral(head);

    return 0;
}