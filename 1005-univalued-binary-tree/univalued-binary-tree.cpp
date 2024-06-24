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
private: 
    bool helper (TreeNode* root, int& val){
            if(root ==nullptr){
                return true;
                }
            if(root->val != val){
            return false;
                }
          return helper(root->left,val) && helper(root->right,val);
    }

public:
    bool isUnivalTree(TreeNode* root) {
        int val = root->val;
       if(helper(root,val)==true){
        return true;
       };
        return false;
    }
};