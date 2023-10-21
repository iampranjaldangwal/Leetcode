/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head){
         struct ListNode* fast=head;
         struct ListNode* slow=head;
       
         while(fast!=NULL&&fast->next!=NULL){
             fast=fast->next->next;
             slow=slow->next;
         }
         struct ListNode* nextnode=slow;
         struct ListNode* curr=slow;
         struct ListNode* prev=NULL;
         while(nextnode!=NULL){
             nextnode=nextnode->next;
             curr->next=prev;
             prev=curr;
             curr=nextnode;
         }
             slow=prev;
         while(head!=NULL&&slow!=NULL){
             if(head->val!=slow->val)
                 return false;
                 slow=slow->next;
                 head=head->next;      
         }
         return true;
}