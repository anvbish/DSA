class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int lp=0;
        int sum=0;
        int ans=INT_MAX;
        for(int rp=0;rp<nums.size();rp++){
            sum+=nums[rp];
            while(sum>=target){
                ans=min(ans,rp-lp+1);
                sum-=nums[lp];
                lp++;
            }
        }
        return ans==INT_MAX?0:ans;
    }
};