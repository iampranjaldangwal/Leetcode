/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int pairSum(struct ListNode* head){
        struct ListNode* fast=head;
        struct ListNode* slow=head;
        struct ListNode* pslow=head;
        while(fast!=NULL&&fast->next!=NULL){
            fast=fast->next->next;
            pslow=slow;
            slow=slow->next;
        }
        pslow->next=NULL;
        struct ListNode* nextNode=slow;
        struct ListNode* prev=slow;
        struct ListNode* curr=slow;
        while(nextNode!=NULL){
              nextNode=nextNode->next;
              curr->next=prev;
              prev=curr;
              curr=nextNode;
        }
        slow=prev;
        int max=0;
        while(head!=NULL&&slow!=NULL){
            int sum=head->val+slow->val;
            if(sum>max)
            max=sum;
            head=head->next;
            slow=slow->next;
        }
        return max;
}