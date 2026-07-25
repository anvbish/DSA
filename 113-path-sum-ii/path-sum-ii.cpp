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
    void search(TreeNode* root, int targetSum,vector<int>&curr,vector<vector<int>>&ans){
        if(root==NULL)return;
        curr.push_back(root->val);
        targetSum-=root->val;
        if(root->left==NULL&& root->right==NULL && targetSum==0)ans.push_back(curr);
        search(root->left,targetSum,curr,ans);
        search(root->right,targetSum,curr,ans);
        curr.pop_back();
    }



    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int>curr;
        vector<vector<int>>ans;
        search(root,targetSum,curr,ans);
        return ans;
    }
};