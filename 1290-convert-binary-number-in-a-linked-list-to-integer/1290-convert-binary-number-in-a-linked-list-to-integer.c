/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int getDecimalValue(struct ListNode* head){
       struct ListNode*temp=head;
       int arr[30];
       int i=0,decimal=0;
       while(temp!=NULL){
           arr[i]=temp->val;
           temp=temp->next;
           i++;
       }
       for(int j=i-1;j>=0;j--){
           decimal+=arr[j]*pow(2,i-(j+1));
       }
    return decimal;
}