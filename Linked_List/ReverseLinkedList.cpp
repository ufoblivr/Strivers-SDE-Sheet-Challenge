#include <bits/stdc++.h>

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) {
    LinkedListNode<int>* prev_p = NULL;
    LinkedListNode<int>* current_p = head;
    LinkedListNode<int>* next_p;

    while(current_p) {
        next_p = current_p->next;
        current_p->next = prev_p;
        
        prev_p = current_p;
        current_p = next_p;
    }

    head = prev_p;
    return head;
}
