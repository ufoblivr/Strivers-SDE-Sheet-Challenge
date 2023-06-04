//https://www.codingninjas.com/codestudio/problems/linked-list-cycle-ii_8230823?challengeSlug=striver-sde-challenge&leftPanelTab=1

Node *firstNode(Node *head) {
    if(!head || !head->next) {
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;
    Node* entry = head;

    while(fast->next && fast->next->next) {
        slow = slow->next;
        fast = fast->next->next;

        if(slow==fast) {
            while(slow != entry) {
                slow = slow->next;
                entry = entry->next;
            }
            return entry;
        }
    }
    return NULL;
}
