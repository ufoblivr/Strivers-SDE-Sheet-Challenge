//https://www.codingninjas.com/codestudio/problems/palindrome-linked-list_8230717?challengeSlug=striver-sde-challenge&leftPanelTab=0

LinkedListNode<int>* reverseLinkedList(LinkedListNode<int>* head) {
    LinkedListNode<int>* prev = nullptr;
    LinkedListNode<int>* curr = head;

    while (curr != nullptr) {
        LinkedListNode<int>* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    return prev;
}

bool isPalindrome(LinkedListNode<int>* head) {
    if (head == nullptr || head->next == nullptr) {
        return true;
    }

    LinkedListNode<int>* slow = head;
    LinkedListNode<int>* fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }

    slow = reverseLinkedList(slow);

    while (slow != nullptr) {
        if (head->data != slow->data) {
            return false; 
        }
        head = head->next;
        slow = slow->next;
    }

    return true;
}
