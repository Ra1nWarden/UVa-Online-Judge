/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        if(root == NULL)
            return false;
        if(root->left == NULL && root->right == NULL)
            return sum == root->val;
        else {
            bool ans = false;
            if(root->left != NULL)
                ans = ans || hasPathSum(root->left, sum - root->val);
            if(root->right != NULL)
                ans = ans || hasPathSum(root->right, sum - root->val);
            return ans;
        }
    }
};
