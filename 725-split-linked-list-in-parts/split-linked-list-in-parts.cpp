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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int length = 0;
        ListNode* curr = head;
        
     
        while (curr) {
            length++;
            curr = curr->next;
        }
        
        
        int base_len = length / k;
        int remainder = length % k;
        
       
        curr = head;
        vector<ListNode*> answer;
        
        
        for (int i = 0; i < k; i++) {
            answer.push_back(curr);
            int part_len = base_len + (i < remainder ? 1 : 0); 
            for (int j = 0; j < part_len - 1; j++) {
                if (curr)
                    curr = curr->next;
            }
            
            if (curr) {
                ListNode* next = curr->next;
                curr->next = nullptr;
                curr = next;
            }
        }
        return answer;
    }
};
