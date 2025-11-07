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
   ListNode* reverse(ListNode *j , ListNode *k){
      ListNode *a=j;
      ListNode *b=nullptr;
      ListNode *c=nullptr;

      while(a!=k){
        b=a->next;
        a->next = c;
        c=a;
        a=b;
      }
      return c;

   }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(!head or left==right) return head;
     ListNode *i = nullptr;
     ListNode *j = head;
     ListNode *k = head;
     ListNode *a = nullptr;
     int cnt =1;
     while(cnt<right){
        cnt++;
        k = k->next;
     }

      a = k->next;

     cnt=1;
     j=head;
     while(cnt<left){
        cnt++;
        i=j;
        j=j->next;
        
     }
     

     ListNode *res =  reverse(j,k->next);

     if(i) i->next=res;
     else head = res;
     j->next=a;
     return head;
     
     

    }
};