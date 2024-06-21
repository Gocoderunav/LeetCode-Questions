// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
//     private: bool findSum(TreeNode* root, int& targetSum, int&sum){
//         if(root==nullptr && sum!= targetSum){
//             return;
//         }
//         sum+= root->val;
//         if(sum >= targetSum){
//             return;
//         }
//         if(sum==targetSum){
//             return true;
//         }

          
//         bool flag = findSum(root->right,targetSum,sum) || findSum(root->left,targetSum,sum);
//         if(flag == true){
//             return false;
//         }
//         sum-=node->val;
//     }
// public:
//     bool hasPathSum(TreeNode* root, int targetSum) {
//     int sum=0;
//     return findSum(root,targetSum,sum)
    
         
//     }
// };

class Solution {
private: 
    bool findSum(TreeNode* root, int targetSum, int sum) {
       if(root==nullptr){
        return false;
       }


       sum+=root->val;
       if(root->left==nullptr && root->right==nullptr){
          return sum==targetSum;
       }

        bool leftPath = findSum(root->left, targetSum, sum);
        bool rightPath = findSum(root->right, targetSum, sum);

        return leftPath || rightPath;
    }

public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        int sum = 0;
        return findSum(root, targetSum, sum);
    }
};
