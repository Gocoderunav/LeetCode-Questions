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
    private: bool check(TreeNode* p, TreeNode* q){
        if(p==nullptr && q==nullptr){
            return true;
        }
        if(p == nullptr || q== nullptr || p->val != q->val ){
            return false;
        }
        return check(p->left,q->left) && check(p->right ,q->right);
    }
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
         if(root == nullptr){
            return false;
         }
        
        if(check(root,subRoot)==true){
            return true;
        }
       return  isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);
    }
};