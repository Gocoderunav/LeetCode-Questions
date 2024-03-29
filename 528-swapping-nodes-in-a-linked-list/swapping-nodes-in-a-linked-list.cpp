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
    ListNode* swapNodes(ListNode* head, int k) {
         if(head == NULL || head -> next == NULL) 
            return head;
        ListNode* curr = head;
        int count =1;

        

        while(count!=k){
            
            curr =curr->next;
            count++;


        }

         if (curr == nullptr) 
            return head;
            
        ListNode* firstNode = curr;
        ListNode* secondNode = head;

        while(curr->next){
            curr= curr->next;
            secondNode= secondNode->next;
            
        }

        int valFirst = firstNode->val;
        firstNode->val =secondNode->val ;
        secondNode->val = valFirst;

        return head;

        
    }
};