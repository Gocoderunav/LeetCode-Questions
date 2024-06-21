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
int checkHeight(TreeNode* root){
    if(root == nullptr){
            return 0;
        }
        int lHeight =checkHeight(root->left);
        if(lHeight ==-1){
            return -1;
        }
        int lRight = checkHeight(root->right);
        if(lRight==-1){
            return -1;
        }
        if(abs(lHeight - lRight) >1 )return -1;
        return 1+max(lHeight,lRight);
        
}
    bool isBalanced(TreeNode* root) {
         
       
        int height = checkHeight(root);
        if(height==-1){
            return false;
        }
        return true;
    }
    
};