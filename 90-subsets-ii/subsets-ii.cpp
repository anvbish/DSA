class Solution {
public:
    void findSubSet(int idx, vector<int>& nums, vector<vector<int>>& ans, vector<int>& ds) {
        ans.push_back(ds);

        for(int i = idx; i < nums.size(); i++) {
            
            if(i > idx && nums[i] == nums[i-1]) continue;

            ds.push_back(nums[i]);
            findSubSet(i + 1, nums, ans, ds);
            ds.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());  
        vector<vector<int>> ans;
        vector<int> ds;

        findSubSet(0, nums, ans, ds);
        return ans;
    }
};