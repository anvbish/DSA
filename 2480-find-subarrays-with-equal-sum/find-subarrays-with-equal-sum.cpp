class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        vector<int> storeSum;
        for(int i=0;i<nums.size()-1;i++){
            int sum=nums[i]+nums[i+1];

            for(int j=0;j<storeSum.size();j++){
                if(sum== storeSum[j]){
                    return true;
                }
            }
            storeSum.push_back(sum);
        }
        return false;
    }
};