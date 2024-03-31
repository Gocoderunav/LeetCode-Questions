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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode * dummy = new ListNode(0);
        ListNode* curr= dummy;
         int carry =0;

         while(l1 || l2 || carry){
            int val1=0 ;
            int val2=0;
           if(l1){
            val1= l1->val;

           }
           else{
            val1=0;
           }
            if(l2){
            val2= l2->val;

           }
           else{
            val2=0;
           }
           
            int addedVal = val1+val2+carry;
            carry = addedVal / 10;
            addedVal= addedVal % 10;
            curr->next = new ListNode(addedVal);
            
            if(l1){
               l1= l1->next; 
            }
            if(l2){
               l2 =l2->next;
            }
            curr= curr->next;
         } 
        return dummy->next;
    }
};