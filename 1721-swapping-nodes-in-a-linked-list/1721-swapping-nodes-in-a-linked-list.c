/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapNodes(struct ListNode* head, int k){
      struct ListNode* temp=head;
       int len=0;
      while(temp!=NULL){
          temp=temp->next;
          len++;
      }
      temp=head;
      int arr[len];
      int i=0;
      while(temp!=NULL){
          arr[i]=temp->val;
          temp=temp->next;
          i++;
      }
      i=0;
          int protemp=arr[k-1];
          arr[k-1]=arr[len-k];
          arr[len-k]=protemp;
    temp=head;
    while(temp!=NULL){
         temp->val=arr[i];
         temp=temp->next;
         i++;
    }
    return head;
}