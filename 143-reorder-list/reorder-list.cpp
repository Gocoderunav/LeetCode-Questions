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
    private: ListNode* reversedList(ListNode* head){
        ListNode* prev =NULL;
        ListNode* curr =head;
         while(curr){
            ListNode* next = curr->next;
            curr->next = nullptr;
            curr->next = prev;
            prev =curr;
            curr= next;
            
         }
         return prev;
    }
public:

    void reorderList(ListNode* head) {
        
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast->next && fast->next->next){
            slow = slow->next;
            fast =fast->next->next;
        }
        
        ListNode* temp1 = head;
       ListNode* temp2 = reversedList(slow->next);
       slow->next = nullptr;

       while(temp1 && temp2){
        ListNode* next1 = temp1->next;
        ListNode* next2 = temp2->next;
        
        temp1->next = temp2;
        temp2->next =next1;
        
        temp1= next1;
        temp2 =next2;

       }
     

    }
};