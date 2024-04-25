#ifndef LINKEDLIST_H    
#define LINKEDLIST_H

typedef struct Node
{
    int data;
    struct Node *next; 
} Node;

typedef struct
{
    Node *head;
    int size;
} LinkedList;

void printLinkedList(LinkedList *ll);
LinkedList *linkedList();
void insert(LinkedList *ll, int d);
int insertAtIndex(LinkedList *ll, int index, int data);
void insertAtEnd(LinkedList *ll, int data);
void cleanup(LinkedList *ll);

#endif /* LINKEDLIST_H */