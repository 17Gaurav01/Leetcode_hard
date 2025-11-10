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
    ListNode* reverseList(ListNode* head) {
        ListNode *i = head;
        ListNode *j = nullptr;
        ListNode *k = nullptr;

       while(i){
            j = i->next;
            i->next = k;
            k = i;
            i = j;
        }
        return k;
    }
};