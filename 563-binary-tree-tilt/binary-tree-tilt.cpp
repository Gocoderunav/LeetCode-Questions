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
    private: int helper(TreeNode* root, int& res){
        if(root==nullptr){
            return 0;
        }
        int leftHeight = (root->left!=nullptr)? helper(root->left,res):0;
        int rightHeight =(root->right!=nullptr)? helper(root->right,res):0;
        res+= abs(leftHeight-rightHeight);
        return root->val +leftHeight + rightHeight;
    }
public:
    int findTilt(TreeNode* root) {
        int res =0;
        helper(root,res);
        return res;
    }
};