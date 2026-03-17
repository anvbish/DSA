class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int freq=1;
        int maxFreq=0;
        int ans=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                if(i>0 && nums[i]==nums[i-1]){
                freq++;
                
                }
                else{freq=1;}
                if(freq>maxFreq){
                    maxFreq=freq;
                    ans=nums[i];
                }
            }
            else{freq=0;}
        }
        return ans;
    }
};