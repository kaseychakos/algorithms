#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

void printLinkedList(LinkedList *ll) {
    Node *p = ll->head;
    while (p != NULL)
    {
        printf("%d", p->data);
        p = p->next;
    }
    (void) getc(stdin);
}

LinkedList *linkedList() {
    LinkedList *ll = (LinkedList *)malloc(sizeof(LinkedList));
    ll->head = NULL;
    ll->size = 0;
    return ll;
}

void insert(LinkedList *ll, int d) {
    Node *temp = (Node *)malloc(sizeof(Node));
    temp->data = d;
    temp->next = ll->head;
    ll->head = temp;
    ll->size++;
}

int insertAtIndex(LinkedList *ll, int index, int data) {
    // check if null or index out of bounds
    if (index < 1 || &index == NULL || index > ll->size) {
        return -1;
    }

    Node *current = ll->head;
    Node *newNode = (Node *)malloc(sizeof(Node));    
    newNode->data = data;
    newNode->next = NULL;

    // loop through list to get to the node at the previous index
    for(int i = 0; current != NULL && i < index -1; i++) {
        current = current->next;
    }

    // swap if next is not null
    if (current->next == NULL) {
        current->next = newNode;
    } else {
        Node *temp = current;
        current->next = newNode;
        newNode->next = temp->next;
    }
    ll->size++;
    return 0;
}

void insertAtEnd(LinkedList *ll, int data) {
    Node *pHead = ll->head;
    Node *node = (Node *)malloc(sizeof(Node));
    node->data = data;
    node->next = NULL;
    
    while (pHead != NULL)
    {
        if (pHead->next == NULL) {
            pHead->next = node;
            break;
        }
        pHead = pHead->next;
    }
}

void cleanup(LinkedList *ll) {
    Node *current = ll->head;
    Node *next;

    while (current != NULL){
        next = current->next;
        free(current);
        current = next;
    }

    free(ll);
}