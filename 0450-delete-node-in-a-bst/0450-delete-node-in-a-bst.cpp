/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
   TreeNode* find(TreeNode* r){
       while(r->left) r=r->left;
       return r;
   }
    TreeNode* helper(TreeNode* r , int x){
     if(!r) return nullptr;
     if(r->val<x) r->right = helper(r->right ,x);
     else if(r->val>x) r->left =  helper(r->left,x);
     else{
         if(!r->left) return r->right;
          if(!r->right) return r->left;
         TreeNode* k = find(r->right);
         r->val = k->val;
         r->right = helper(r->right , k->val);
     }
     return r;

    }
    TreeNode* deleteNode(TreeNode* root, int key) {
      
        return helper(root , key);
        
    }
};