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
    private:ListNode* reversedList( ListNode* head){
    ListNode* prev =NULL;
    ListNode* curr =head;
    while(curr){
        ListNode* next = curr->next;
        curr->next=prev;
        prev =curr;
        curr =next;
    }
    return prev;
}


public:
    int pairSum(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast->next && fast->next->next){
            slow = slow->next;
            fast =fast->next->next;
        }
       
        ListNode* temp2 = reversedList(slow->next);
         slow->next->next =nullptr;
        ListNode* temp1 = head;
        int maxi =-1;
        while(temp1 && temp2 ){
            int val = temp1->val + temp2->val;
            maxi = max(val,maxi);
           temp1= temp1->next;
            temp2=temp2->next;

        }
        return maxi;
    }
};