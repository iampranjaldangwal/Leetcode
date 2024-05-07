/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* doubleIt(ListNode* head) {
    stack<int> stk,temp;
    int carry=0;
    ListNode* first=head;
    while(first != NULL)   {
        stk.push(first->val);
        first=first->next; }
    while(!stk.empty()) {
      int rem=((stk.top() * 2) + carry )%10;
      carry=((stk.top() * 2 ) + carry )/10;
      temp.push(rem);
      stk.pop();
    }
    if(carry) temp.push(carry);
    ListNode* ans=new ListNode();
    ListNode* k=ans;
    while(!temp.empty()) {
     ListNode* curr=new ListNode();
     curr->val=temp.top();
     curr->next=NULL;
     k->next=curr;
     k=curr;
     temp.pop();
    }
    ans=ans->next;
    return ans;  
    }
};