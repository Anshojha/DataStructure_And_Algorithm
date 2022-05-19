#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
}



void linkedListTraversal(struct Node *N1){
    struct Node *ptr = N1;
    do{
        printf("Element is %d\n", ptr->data);
        ptr = ptr->next;
    }while(ptr!=N1);
}

int main()
{

    struct Node *N1 = (struct Node *)malloc(sizeof(struct Node *));
    struct Node *N2 = (struct Node *)malloc(sizeof(struct Node *));
    struct Node *N3 = (struct Node *)malloc(sizeof(struct Node *));
    struct Node *N4 = (struct Node *)malloc(sizeof(struct Node *));

    N1->data = 10;
    N1->prev = NULL;
    N1->next = N2;

    N2->data = 11;
    N2->prev = N1;
    N2->next = N3;

    N3->data = 12;
    N3->prev = N2;
    N3->next = N4;

    N4->data = 13;
    N4->prev = N3;
    N4->next = N1;

    linkedListTravesral(N1);
    return 0;
}