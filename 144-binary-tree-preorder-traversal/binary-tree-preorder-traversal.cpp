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
 void pretraversal(TreeNode* root, vector<int>&vec){
    if(root==nullptr){
        return;
    }
    vec.push_back(root->val);
    pretraversal(root->left,vec);
    pretraversal(root->right,vec);
 }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> vec;
        pretraversal(root,vec);
        return vec;
    }
};