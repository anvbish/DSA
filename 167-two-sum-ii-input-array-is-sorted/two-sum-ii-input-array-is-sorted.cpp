class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int lp=0;
        int rp=nums.size()-1;
        
        while(lp<rp){
            int sum=nums[lp]+nums[rp];
            if(sum==target){
                ans.push_back(lp+1);
                ans.push_back(rp+1);
                return ans;
            }
            else if(sum>target){
                rp--;
            }
            else{
                lp++;
            }

        }
        return ans;
    }
};