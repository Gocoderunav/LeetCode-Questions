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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp =head;
        int count =0;
        while(temp){
                count++;
                temp =temp->next;
        }
        if (count == n) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }
         temp= head;
         ListNode* prev = NULL;
        while(temp){
            ListNode* next =temp->next;
            
            int nodeposF = count--;
            if(nodeposF == n){
                prev->next = next;
                 delete temp;
                 break;
            }
             
            prev =temp;
            temp =next;

           
        }
        return head;
    }
};