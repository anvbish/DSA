class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
       
        int count=1;
        int ans=nums[0];
        for(int i=1;i<n;i++){
            if (nums[i]==nums[i-1]){
                count++;
            }
            else{
                count=1;
            }
        
        
        if(count>n/2){
            
            ans=nums[i];
            break;
        }
    }
    
    return ans;
    }

};