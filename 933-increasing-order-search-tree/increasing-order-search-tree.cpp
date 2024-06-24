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
void helper(TreeNode* root, TreeNode*&curr){
    if(root == nullptr){
        return;
    }
    helper(root->left,curr);
    curr->right = new TreeNode(root->val);
    curr = curr->right;
    helper(root->right,curr);
}
public:
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode* dummy = new TreeNode(-1);
        TreeNode* curr = dummy;
        helper(root, curr);
        return dummy->right;
    }
};