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
    struct NodeInfo {
        TreeNode* parent;
        int depth;
    };
    
    void helper(TreeNode* root, TreeNode* parent, int x, int y, int depth, NodeInfo& xInfo, NodeInfo& yInfo) {
        if (root == nullptr) return;

        if (root->val == x) {
            xInfo = {parent, depth};
        } else if (root->val == y) {
            yInfo = {parent, depth};
        }
        
        helper(root->left, root, x, y, depth + 1, xInfo, yInfo);
        helper(root->right, root, x, y, depth + 1, xInfo, yInfo);
    }

public:
    bool isCousins(TreeNode* root, int x, int y) {
        if (root == nullptr) return false;

        NodeInfo xInfo = {nullptr, -1};
        NodeInfo yInfo = {nullptr, -1};

        helper(root, nullptr, x, y, 0, xInfo, yInfo);

        return (xInfo.depth == yInfo.depth) && (xInfo.parent != yInfo.parent);
    }
};
