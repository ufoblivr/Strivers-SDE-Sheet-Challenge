#include <bits/stdc++.h>

/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second) {
    if(first == NULL) return second; 
    if(second == NULL) return first;

    Node<int>* mergedHead = NULL;
    Node<int>* tail = NULL;

    if (first->data <= second->data) {
        mergedHead = first;
        tail = first;
        first = first->next;
    } 
    else {
        mergedHead = second;
        tail = second;
        second = second->next;
    }

    while(first!=NULL && second!=NULL) {
        if(first->data <= second->data) {
            tail->next = first;
            tail = first;
            first = first->next;
        }
        else{
            tail->next = second;
            tail = second;
            second = second->next;
        }
    }

    if (first != NULL) {
        tail->next = first;
    } 
    else if (second != NULL) {
        tail->next = second;
    }

    return mergedHead;

}
