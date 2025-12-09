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
    int height(TreeNode *r){
      if(!r) return 0;
       int l = height(r->left);
       if(l==-1) return -1;
       int ro = height(r->right);
       if(ro==-1) return -1;
       if(abs(l-ro)>1) return -1;
        return 1+max(height(r->left) , height(r->right));
    }
    bool isBalanced(TreeNode* root) {
        if(height(root)==-1) return 0;
        return 1;
    }
};