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
    ListNode* removeNodes(ListNode* head) {
     stack<ListNode*> stack;
     ListNode* curr = head;
     while(curr != NULL){
        stack.push(curr);
        curr = curr->next;
     }
     curr = stack.top();
     stack.pop();
     int max = curr->val;
     ListNode* resultList = new ListNode(max);
     
     while(!stack.empty()){
        curr = stack.top();
        stack.pop();
        if(curr->val >= max){
            ListNode* newNode = new ListNode(curr->val);
            newNode->next = resultList;
            resultList = newNode;
            max = curr->val;
        }
    
     }
    return resultList;
    }
};
