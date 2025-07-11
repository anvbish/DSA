class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currS=0;
        int maxS=INT_MIN;
        for(int i=0;i<nums.size();i++){
            currS+=nums[i];
            maxS=max(currS,maxS);
            if(currS<0){
                currS=0;
            }
            
        }
        return maxS;
    }
};