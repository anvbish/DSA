class Solution {
public:
    void solve(int num, int k, int target, 
               vector<vector<int>>& ans, vector<int>& ds) {

       
        if (ds.size() == k) {
            if (target == 0) {
                ans.push_back(ds);
            }
            return;
        }

    
        if (num > 9 || target < 0) return;

        ds.push_back(num);
        solve(num + 1, k, target - num, ans, ds);
        ds.pop_back();

 
        solve(num + 1, k, target, ans, ds);
    }

    vector<vector<int>> combinationSum3(int k, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        solve(1, k, target, ans, ds);  
        return ans;
    }
};