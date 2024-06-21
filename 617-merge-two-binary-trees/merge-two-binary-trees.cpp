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
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if(root1 == nullptr && root2== nullptr ){
            return nullptr;
        }
        int valA = (root1!=nullptr)? root1->val:0;
        int valB = (root2!=nullptr)? root2->val:0;
        TreeNode* root = new TreeNode(valA+valB);
        root->left =  mergeTrees((root1!=nullptr)? root1->left:NULL,(root2!=nullptr)? root2->left:NULL);
        root->right = mergeTrees((root1!=nullptr)? root1->right:NULL,(root2!=nullptr)? root2->right:NULL);
        return root;
    }
};