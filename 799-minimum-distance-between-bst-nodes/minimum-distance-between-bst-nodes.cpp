class Solution {
    void helper(TreeNode* root, int& res, int& prev) {
        if (root == nullptr) {
            return;
        }
        
        helper(root->left, res, prev);
        
        
        if (prev != -1) {  
            res = min(res, abs((root->val) - prev));
        }
        prev = root->val;  
        
        
        helper(root->right, res, prev);
    }

public:
    int minDiffInBST(TreeNode* root) {
        int res = INT_MAX;  
        int prev = -1;  
        helper(root, res, prev);
        return res;
    }
};
