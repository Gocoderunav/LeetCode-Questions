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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if(root==nullptr){
            return res;
        } 
        queue<TreeNode*> que;
        que.push(root);
        bool flag = true;
        while(!que.empty()){
            int n = que.size();
            vector<int>vec(n);
            for(int i=0;i<n;i++){
                TreeNode* node = que.front();
                que.pop();
                
                int index = (flag)? i:(n-1-i);
                vec[index]= node->val;
                if(node->left){
                    que.push(node->left);
                }
                if(node->right){
                    que.push(node->right);
                }

            }
            flag = !flag;
            res.push_back(vec);
        }
        return res;
    }
};