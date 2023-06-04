//https://www.codingninjas.com/codestudio/problems/reverse-linked-list_8230724?challengeSlug=striver-sde-challenge

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
