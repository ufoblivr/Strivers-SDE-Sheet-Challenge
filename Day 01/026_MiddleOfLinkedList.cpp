//https://www.codingninjas.com/codestudio/problems/middle-of-linked-list_8230764?challengeSlug=striver-sde-challenge

Node *findMiddle(Node *head) {
    int n = 0;
    Node* temp = head;
    while(temp) {
       	n++;
       		temp = temp->next;
    }
   	 
    temp = head;
   	 
    for(int i = 0; i < n / 2; i++) {
       		temp = temp->next;
    }
   	 
    return temp;
}
