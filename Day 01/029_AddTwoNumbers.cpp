//https://www.codingninjas.com/codestudio/problems/add-two-numbers-as-linked-lists_8230833?challengeSlug=striver-sde-challenge

Node *addTwoNumbers(Node *num1, Node *num2){
    Node* dummy = new Node();
    Node* temp = dummy;
    int carry = 0;
    while(num1!=NULL || num2!=NULL || carry) {
        int sum = 0;
        if(num1!=NULL) {
            sum += num1->data;
            num1 = num1->next;
        }
        if(num2!=NULL) {
            sum += num2->data;
            num2 = num2->next;
        }

        sum += carry;
        carry = sum/10;
        Node* node = new Node(sum%10);
        temp->next = node;
        temp = temp->next; 
    }
    return dummy->next;
}
