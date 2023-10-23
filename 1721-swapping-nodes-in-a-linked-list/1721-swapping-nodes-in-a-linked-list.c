/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapNodes(struct ListNode* head, int k){
    struct ListNode* temp=head;
    struct ListNode* kNode=NULL;
    struct ListNode* swapNode=NULL;
    int len=0;
    while(temp!=NULL){
        len++;
        if(len==k)
        kNode=temp;
    temp=temp->next;
   }
 temp=head;
    int i=0;
    while(i<len-k){
    temp=temp->next;
    i++;
   }
 swapNode=temp;

   int tempVal=kNode->val;
   kNode->val=swapNode->val;
   swapNode->val=tempVal;

   return head;
}