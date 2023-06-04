//https://www.codingninjas.com/codestudio/problems/merge-two-sorted-linked-lists_8230729?challengeSlug=striver-sde-challenge

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
