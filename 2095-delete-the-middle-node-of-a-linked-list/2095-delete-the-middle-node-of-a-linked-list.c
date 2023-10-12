/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteMiddle(struct ListNode* head){
        struct ListNode *fast=head;
        struct ListNode *slow=head;
        struct ListNode *temp=NULL;
           if(head->next==NULL){
            head=NULL;
            return head;
        }
        while(fast!=NULL&&fast->next!=NULL){
            fast=fast->next->next;
            temp=slow;
            slow=slow->next;
        }
          temp->next=slow->next;
          free(slow);
        return head;
        
}