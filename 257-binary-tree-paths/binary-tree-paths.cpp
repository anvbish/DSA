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
    void helper(TreeNode* root,string curr,vector<string>& ans){
        if(root==NULL)return;
        curr += to_string(root->val);
        if(root->left==NULL&& root->right==NULL ){
        ans.push_back(curr);
        return;
        }

        helper(root->left, curr+"->",ans);
        helper(root->right, curr+"->",ans);
    }


    vector<string> binaryTreePaths(TreeNode* root) {
        string curr;
        vector<string> ans;
        helper(root,"",ans);
        return ans;
    }
};