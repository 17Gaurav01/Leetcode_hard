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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head or !head->next) return head;
        ListNode *i = head;
        ListNode *j = nullptr;
        while(i){
            if(i->next and i->val == i->next->val){
                 j= i->next;
                 i->next = j->next;
                 delete j;
            }
            else i = i->next;
        }
        return head;
    }
};