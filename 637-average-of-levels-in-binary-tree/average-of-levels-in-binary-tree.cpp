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
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode*> que;
        que.push(root);
        vector<double> vec;
        while(!que.empty()){
            int n = que.size();
            double val_push =0;
            for(int i=0;i<n;i++){
                TreeNode* node = que.front();
                que.pop();
                int avg_level = node->val;
                val_push += avg_level;
                

                if(node->left !=nullptr) que.push(node->left);
                if(node->right!= nullptr) que.push(node->right);

            }
            vec.push_back((val_push)/n);


        }
        return vec;
    }
};