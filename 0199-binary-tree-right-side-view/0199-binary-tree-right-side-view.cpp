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
    vector<int> ans;
    void solve(TreeNode* r,int h)
    {
        if(!r)return;
        if(ans.size()<h+1)
            ans.push_back(r->val);
        solve(r->right,h+1);
        solve(r->left,h+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        solve(root,0);
        return ans;
    }
};