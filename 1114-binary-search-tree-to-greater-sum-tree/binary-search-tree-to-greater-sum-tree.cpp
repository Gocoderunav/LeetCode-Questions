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
void helper(TreeNode* root, int& sum){
    if(root==nullptr){
        return;
    }
    // int value = root->val;
    // helper(root->left,sum);
    // root->val = sum;
    // sum-= sum-value;
    // helper(root->right,sum);
    
    helper(root->right,sum);
    sum += root->val;

    root->val = sum;
    helper(root->left,sum);

}

   
public:
    TreeNode* bstToGst(TreeNode* root) {
        // sum of all nodes in binary tree
         int sum =0;
         
         
         helper(root,sum);
         return root;

    }
};