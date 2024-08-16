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
    vector <vector<int>> result;
    if (!root) return result;
    vector <int> level;
    queue<TreeNode*> q;
    q.push(root);
     while (!q.empty()){
        int qLen=q.size();
        level.clear();
        for (int i=0;i<qLen;i++){
           TreeNode* node = q.front();
            q.pop();
            if (node){
                level.push_back(node->val);
                q.push(node->left);
                q.push(node->right);
            }
        }
        if(!level.empty())
        result.push_back(level);
    }
    return result;
    }
};