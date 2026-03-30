class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int saySum=0;
        int currSum=0;
        int reqd;
        int n=nums.size();
        for(int i=0;i<=n;i++){
            saySum+=i;
        }
        for(int i=0;i<n;i++){
            currSum+=nums[i];
        }
        reqd=saySum-currSum;
        return reqd;
    }
};