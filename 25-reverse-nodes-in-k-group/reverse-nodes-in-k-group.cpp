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
    ListNode* getKth(ListNode* curr, int k) {
        while (curr && k > 0) {
            curr = curr->next;
            k--;
        }
        return curr;
    }

public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* dummy = new ListNode(0, head);
        ListNode* grpPrev = dummy;

        while (grpPrev) {
            ListNode* kthNode = getKth(grpPrev, k);
            if (!kthNode) {
                break;
            }

            ListNode* nextGroup = kthNode->next;

            // reversing the group
            ListNode* prev = nextGroup;
            ListNode* curr = grpPrev->next;

            while (curr != nextGroup) {
                ListNode* temp = curr->next;
                curr->next = prev;
                prev = curr;
                curr = temp;
            }

            ListNode* temp = grpPrev->next;
            grpPrev->next = kthNode;
            grpPrev = temp;
        }

        return dummy->next;
    }
};
