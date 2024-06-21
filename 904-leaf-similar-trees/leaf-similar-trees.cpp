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
    private: void helper(TreeNode* root, vector<int>& vec){
        if(root== nullptr){
            return;
        }
        if(root->left == nullptr && root->right == nullptr){
            vec.push_back(root->val);
        }
        helper(root->left,vec);
        helper(root->right,vec);
    }
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> vec1,vec2;
        helper(root1, vec1);
        helper(root2, vec2);
        if(vec1==vec2){
            return true;
        }
        return false;
    }
};