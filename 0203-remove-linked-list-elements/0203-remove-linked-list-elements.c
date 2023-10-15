/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val){
          struct ListNode *dummy=(struct ListNode*)malloc(sizeof(struct ListNode));
          dummy->next=head;
         struct ListNode *temp=head;
         struct ListNode *pre=dummy;
          while(temp!=NULL){
            if(temp->val==val){
                pre->next=temp->next;
                temp->next=NULL;
                temp=pre->next;
            }
            else{
                pre=temp;
                temp=temp->next;
            }
          }
    return dummy->next;
}