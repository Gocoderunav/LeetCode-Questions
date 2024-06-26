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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;

        queue<TreeNode*> que;
        que.push(root);
        if(root == NULL){
            return ans;
        }
        
        while(!que.empty()){
            vector<int> vec;
            int n = que.size();
            for(int i=0;i<n;i++){
                    TreeNode* Node = que.front();
                    que.pop();
                    if(Node->left) que.push(Node->left);
                    if(Node->right) que.push(Node->right);
                    vec.push_back(Node->val);
            }
            ans.push_back(vec);

        }
        return ans;
    }
};