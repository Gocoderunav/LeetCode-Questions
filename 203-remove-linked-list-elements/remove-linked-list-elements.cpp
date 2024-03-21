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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummy = new ListNode(0,head);
        ListNode* prev =dummy;
        ListNode* curr =head;
        while(curr){
            ListNode* next = curr->next;
            if(curr->val==val){
              prev->next =next;
              
              
            }
           else{
            prev =curr; 

            curr=next;
            }
            curr=next;

        }
        return dummy->next;
    }
};