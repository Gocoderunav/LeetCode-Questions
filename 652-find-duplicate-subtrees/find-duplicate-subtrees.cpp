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
string getSubDuplicate(TreeNode* root, unordered_map<string,int>&mp,vector<TreeNode*>&res){
         if(root==NULL){
            return "N";
         }
         string s = to_string (root->val) + "," +getSubDuplicate(root->left,mp,res) + ","+getSubDuplicate(root->right,mp,res);
         if(mp[s]==1){
            res.push_back(root);
         }
         mp[s]++;
         return s;
}
public:
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        unordered_map<string ,int> mp;

        vector<TreeNode*>res;
        getSubDuplicate(root,mp,res);
        return res;
    }
};