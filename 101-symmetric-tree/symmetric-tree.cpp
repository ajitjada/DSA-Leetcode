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
    bool ans = true;

    bool helper(TreeNode* root, TreeNode* leftR, TreeNode* rightR) {

        if(leftR == NULL && rightR == NULL) {
            return true;
        }

        if(leftR == NULL || rightR == NULL) {
            ans = false;
            return false;
        }
        
        if(leftR->val != rightR->val) {
            ans = false;
            return false;
        }

        helper(root, leftR->left, rightR->right);
        helper(root, leftR->right, rightR->left);

        return ans;
    }
    
    bool isSymmetric(TreeNode* root) {
        return helper(root, root->left, root->right);

    }
};