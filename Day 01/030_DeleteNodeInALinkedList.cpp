//https://www.codingninjas.com/codestudio/problems/delete-node-in-a-linked-list_8230813?challengeSlug=striver-sde-challenge

void deleteNode(LinkedListNode<int> * node) {
    *node=*node->next;
}
