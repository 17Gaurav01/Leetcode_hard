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
        if(k==0 or !head or !head->next) return head;
        ListNode *i = head;
        ListNode *j = head;
        int cnt = 1;
        while(i->next!=nullptr){
            cnt++;
            i = i->next;
        }
        i->next=head;
        k%=cnt;
        cnt -=k;
        cnt-=1;
        while(cnt--){
            j=j->next;
        }
        head=j->next;
        j->next=nullptr;
        return head;


    }
};