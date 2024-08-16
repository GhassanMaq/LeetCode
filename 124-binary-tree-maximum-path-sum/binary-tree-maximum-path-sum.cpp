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
class Solution {
public:
    int dfs(TreeNode* root, int& res) {
        if (!root) return 0;
        int leftMax = std::max(dfs(root->left, res), 0);
        int rightMax = std::max(dfs(root->right, res), 0);
        int currentMax = root->val + leftMax + rightMax;
        res = std::max(res, currentMax);
        return root->val + std::max(leftMax, rightMax);
    }
    int maxPathSum(TreeNode* root) {
        int res = root->val;
        dfs(root, res);
        return res;
    }
};
