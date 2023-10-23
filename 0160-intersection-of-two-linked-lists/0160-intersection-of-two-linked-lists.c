/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA,struct ListNode *headB){
    struct ListNode *ListA=headA;
    struct ListNode *ListB=headB;
 
 while(ListA!=ListB){
     if(ListA==NULL)
     ListA=headB;
     else
     ListA=ListA->next;
     if(ListB==NULL)
     ListB=headA;
     else
     ListB=ListB->next;
 }
return ListA;
}