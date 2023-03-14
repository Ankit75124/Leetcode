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
    int sumNumbers(TreeNode* root) {
        return sumNumbersHelper(root, 0);
    }
    
    int sumNumbersHelper(TreeNode* root, int currentSum) {
        if (root == nullptr) {
            return 0;
        }
        
        currentSum = currentSum * 10 + root->val;
        
        if (root->left == nullptr && root->right == nullptr) {
            return currentSum;
        }
        
        return sumNumbersHelper(root->left, currentSum) + sumNumbersHelper(root->right, currentSum);
    }
};
