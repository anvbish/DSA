class Solution {
public:
    void getallsub(vector<int>& nums,vector<int>& ans, int i,vector<vector<int>>& allsubsets){
        if(i== nums.size()){
            allsubsets.push_back(ans);
            return;
        }
        ans.push_back(nums[i]);
        getallsub(nums,ans,i+1 , allsubsets);

        ans.pop_back();
        //getallsub(nums,ans,i+1 , allsubsets);

        int idx=i+1;
        while(idx<nums.size() && nums[idx]== nums[idx-1]){
            idx++;
        }

        getallsub(nums,ans,idx , allsubsets);
    }







    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>>allsubsets;
        vector<int> ans;

        
        getallsub(nums,ans,0, allsubsets);
        return allsubsets;
        
    }
};