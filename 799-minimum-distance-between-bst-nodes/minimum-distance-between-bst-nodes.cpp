class Solution {
    void helper(TreeNode* root, int& res, int& prev) {
        if (root == nullptr) {
            return;
        }
        // Traverse the left subtree
        helper(root->left, res, prev);
        
        // Process the current node
        if (prev != -1) {  // Check if prev is set
            res = min(res, abs(root->val - prev));
        }
        prev = root->val;  // Update prev to current node's value
        
        // Traverse the right subtree
        helper(root->right, res, prev);
    }

public:
    int minDiffInBST(TreeNode* root) {
        int res = INT_MAX;  // Initialize result with a large value
        int prev = -1;  // Initialize previous node's value with -1 (indicating unset)
        helper(root, res, prev);
        return res;
    }
};
