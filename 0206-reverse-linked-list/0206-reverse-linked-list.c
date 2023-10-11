/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head){
      struct ListNode *nextnode=head,*prenode=NULL,*currnode=head;
      while(nextnode!=NULL){
           nextnode=nextnode->next;
           currnode->next=prenode;
           prenode=currnode;
           currnode=nextnode;
      }
      head=currnode;
return prenode;      
}
