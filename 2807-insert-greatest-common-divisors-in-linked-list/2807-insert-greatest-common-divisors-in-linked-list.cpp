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
    private:
    int calculateGCD(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode * node1 = head;
        ListNode * node2 = head->next;

        if(head->next == NULL)
        return head;

        while(node2 != NULL){
            int gcdVal = calculateGCD(node1->val,node2->val);
            ListNode * gcdNode = new ListNode(gcdVal);
            gcdNode->next = node2;
            node1->next = gcdNode;
            node1 = node2;
            node2 = node2->next;
        }
        return head;
    }
};