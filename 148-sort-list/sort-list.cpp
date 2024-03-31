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
    ListNode* findMid(ListNode* head){
        ListNode* slow = head;
        ListNode* fast =head->next;

        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;

        }
        return slow;
    }

    ListNode* merge(ListNode* head1 ,ListNode* head2){
        ListNode* dummy = new ListNode();
        ListNode* p = dummy;
        ListNode* p1 =head1;
        ListNode* p2 =head2;

        while(p1 != NULL && p2 != NULL){
            if(p1->val < p2->val){
                ListNode* poneNext = p1->next;
                p->next =p1;
                
                p1->next= NULL;
                p1= poneNext;

            } else{

                ListNode* ptwoNext = p2->next;
                p->next = p2;
                p2->next = NULL;
                p2= ptwoNext;
                
            }
            p = p->next;

            if(p1==NULL){
                p->next = p2;
            }
            if(p2==NULL){
                p->next = p1;
            }

        }
        return dummy->next;
    };
public:
    ListNode* sortList(ListNode* head) {
        if(head == nullptr ) return nullptr;
        if(head->next == nullptr) return head;

        ListNode* middleOfLL = findMid(head);
        ListNode* leftHalf =   head;
        ListNode* rightHalf=   middleOfLL->next;
        middleOfLL->next = nullptr;

        leftHalf = sortList(leftHalf);
        rightHalf= sortList(rightHalf);
        head = merge(leftHalf,rightHalf);

        return head;
    }
};