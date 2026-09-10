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

    int ans = 0;
    pair<int, int> sumAndCount(TreeNode* node) {
        if(node == NULL) return {0, 0};

        pair<int, int> leftPair = sumAndCount(node->left);
        pair<int, int> rightPair = sumAndCount(node->right);

        int sum = node->val + leftPair.first + rightPair.first;
        int count = 1 + leftPair.second + rightPair.second;
        int avg = sum / count;

        if(avg == node->val) {
            ans++;
        }

        return {sum, count};
    }

    int averageOfSubtree(TreeNode* root) {

        sumAndCount(root);

        return ans;
    }
};