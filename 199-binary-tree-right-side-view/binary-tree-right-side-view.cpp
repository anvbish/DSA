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
    vector<int> rightSideView(TreeNode* root) {
       queue<TreeNode*>q;
        vector<int>ans;
        q.push(root);
       if(root == NULL) return {};
        while(!q.empty()){
        int n=q.size();
        vector<int>level;
        for(int i=0;i<n;i++){
            TreeNode* node=q.front();
            q.pop();
            if(node->left!=NULL)q.push(node->left);
             if(node->right!=NULL)q.push(node->right);
            if(i==n-1)ans.push_back(node->val);

            }
            
        }
        return ans;
    }
};