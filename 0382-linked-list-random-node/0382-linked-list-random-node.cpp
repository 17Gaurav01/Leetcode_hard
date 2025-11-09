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
   ListNode * head = nullptr ;
    Solution(ListNode* head) {
        this->head= head;
    }
    
    int getRandom() {
        int res = 0 , n = 1;
        ListNode * x = this->head;
        while(x){
           
           if(rand() % n == 0 ){
            res = x->val;
           }
            n++;
            x = x->next;
        }
        return res;
       
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */