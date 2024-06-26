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
 void posttraversal(TreeNode* root, vector<int>& vec){
    if(root == nullptr){
        return;
    }
     posttraversal(root->left,vec);
     posttraversal(root->right,vec);
     vec.push_back(root->val);
 }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> vec;
        posttraversal(root,vec);
        return vec;
    }
};