#include <stdio.h>
#include "linkedlist.h"

int main()
{
    LinkedList *ll = linkedList();
    int index = 3;
    int data = 10;
    insert(ll, 2);
    insert(ll, 8);
    insert(ll, 5);
    insert(ll, 1);
    insert(ll, 4);
    insertAtIndex(ll, index, data);
    insertAtEnd(ll, 20);
    printLinkedList(ll);

    return 0;
}