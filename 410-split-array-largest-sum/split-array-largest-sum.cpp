class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
       
        long long st=*max_element(nums.begin(),nums.end());
        long long end= accumulate(nums.begin(),nums.end(),0);

        while(st<=end){

            long long mid=st+(end-st)/2;
           int noOfSub=1;
            long long sum=0;  
            for(int i=0;i<nums.size();i++){
            
                if(sum+nums[i]<=mid){
                    sum+=nums[i];
                }
                else{
                    sum=nums[i];
                    noOfSub++;

                }
            }
            
            if(noOfSub>k){
                 st=mid+1;
               
            }
            else{
                end=mid-1;
            }
        } 
        return st;
    }
};