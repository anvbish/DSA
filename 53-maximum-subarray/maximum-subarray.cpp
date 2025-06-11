class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currSUM=0, maxSUM= INT_MIN;
        for(int val:nums){
            currSUM+=val;
            maxSUM=max(currSUM,maxSUM);
            if(currSUM<0){
                currSUM=0;
            }
        } 
        return maxSUM;
        
    }
};