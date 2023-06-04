/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node* removeKthNode(Node* head, int k){
    if(head==NULL || k<=0) {
        return head;
    }

    Node* slow = head;
    Node* fast = head;

    for (int i = 0; i < k; i++) {
        if (fast == nullptr) {
            return head;  // k is larger than the list size
        }
        fast = fast->next;
    }

    // If fast is nullptr, it means k is equal to the list size, so we need to delete the head
    if (fast == nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    // Move both pointers until fast reaches the end
    while (fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next;
    }

    // Delete the kth node from the end
    Node* temp = slow->next;
    slow->next = slow->next->next;
    delete temp;

    return head;
}
