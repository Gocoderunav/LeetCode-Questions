class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        if (root == nullptr) return 0;

        int sumLeft = 0;
        if (root->left != nullptr && root->left->left == nullptr && root->left->right == nullptr)
            sumLeft += root->left->val;

        sumLeft += sumOfLeftLeaves(root->left);
        sumLeft += sumOfLeftLeaves(root->right);

        return sumLeft;
    }
};
