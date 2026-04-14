class Solution {
public:
    void findSubset(int idx,int n,vector<int>& nums,vector<vector<int>>&ans,vector<int>&ds){
        if(idx==n){
            ans.push_back(ds);
            return;
        }
        ds.push_back(nums[idx]);
        findSubset(idx+1,n,nums,ans,ds);
        ds.pop_back();

        findSubset(idx+1,n,nums,ans,ds);
        
    }



    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<int>ds;
        vector<vector<int>>ans;
        findSubset(0,n,nums,ans,ds);
        return ans;
    }
};