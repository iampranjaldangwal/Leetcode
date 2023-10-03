/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head){
          struct ListNode* temp=head;
          struct ListNode *dummyNode=(struct ListNode*)malloc(sizeof(struct ListNode));
           dummyNode->next=head;
           struct ListNode *prev=dummyNode;
           
    while(temp!=NULL && temp->next!=NULL){
       if(temp->val==temp->next->val){
              while(temp->next!=NULL && temp->val==temp->next->val){
                      temp=temp->next;
              }
              prev->next=temp->next;
       }
       else{
              prev=temp;
       }
        temp=temp->next;
    }
     return dummyNode->next;
}