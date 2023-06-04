//https://www.codingninjas.com/codestudio/problems/rotate-linked-list_8230752?challengeSlug=striver-sde-challenge&leftPanelTab=1

Node *rotate(Node *head, int k) {
     if(head==NULL || k==0)
          return head;

     Node* temp = head;
     int n = 0;
     while(temp->next) {
          temp = temp->next;  
          n++;
     }

     temp->next = head;

     k = k%(n+1);
     int jump = n-k;
     temp = head;

     while(jump) {
          temp = temp->next;
          jump--;
     }

     Node* returnHead = temp->next;
     temp->next = NULL;

     return returnHead;
}
