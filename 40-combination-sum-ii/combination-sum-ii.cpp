class Solution {
public:
    void findComb(int idx,int target,vector<int>& candidates,vector<vector<int>>&ans,  vector<int>&ds){
        if(target==0){
            ans.push_back(ds);
            return;
        }
        for(int i=idx;i<candidates.size();i++){
            if(i>idx && candidates[i]==candidates[i-1])continue;
            if(candidates[i]>target)break;

            ds.push_back(candidates[i]);
            findComb(i+1,target-candidates[i],candidates,ans,ds);
            ds.pop_back();

        }
    }


    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>ans;
        vector<int>ds;

        findComb(0,target,candidates,ans,ds);
        return ans;
    }
};