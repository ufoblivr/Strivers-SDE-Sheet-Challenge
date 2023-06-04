//https://www.codingninjas.com/codestudio/problems/cycle-detection-in-a-singly-linked-list_8230683?challengeSlug=striver-sde-challenge

bool detectCycle(Node *head) {
    if(!head || !head->next) {
        return false;
    }

    Node* slow = head;
    Node* fast = head;

    while(fast->next && fast->next->next) {
        slow = slow->next;
        fast = fast->next->next;

        if(slow==fast) {
            return true;
        }
    }
    return false;
} 
