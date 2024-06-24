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
    void roottoLeaf(TreeNode* root, vector<string>& vec,string str){
        if (root == nullptr) return; 
         str+=  to_string(root->val);
         if(root->left ==nullptr && root->right == nullptr){
           
            vec.push_back(str);
             return;
         }
         if(root->left !=nullptr) roottoLeaf(root->left,vec,str + "->");
         if(root->right !=nullptr) roottoLeaf(root->right,vec,str + "->");
         

    }
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>vec;
        string str;
        
        roottoLeaf(root,vec,str);
        
        return vec;
    }
};