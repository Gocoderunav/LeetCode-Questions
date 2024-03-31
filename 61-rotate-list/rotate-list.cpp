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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL){
            return head;
        }
        
        ListNode* tail = head;
        int length =1;
        while(tail->next != nullptr){
            length++;
            tail = tail->next;
        }
        k = k % length;
        if(k==0){
            return head;
        }

       ListNode* curr = head;
        for( int i=0 ;i < length-1-k;i++){
            curr = curr->next;
        }
        ListNode* newhead = curr->next;
        curr->next = nullptr;
        tail->next = head;
        return newhead;
    }
};