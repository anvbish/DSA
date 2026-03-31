class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first=-1;
        int last=-1;
        int st=0;
        int end=nums.size()-1;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(target==nums[mid]){
                first=mid;
                end=mid-1;
            }
            else if(target<nums[mid]){
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        st=0; end=nums.size()-1;
        while(st<=end){
             int mid=st+(end-st)/2;
            if(target==nums[mid]){
                last=mid;
                st=mid+1;
            }
            else if(target<nums[mid]){
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        
        }
        return {first,last};
    }
};