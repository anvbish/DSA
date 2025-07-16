class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        int st=0;int end=n-1;
        while(st<=end){
             int mid=st+(end-st)/2;

            if (n == 1) return nums[0];

            if(mid==0 && nums[0]!= nums[1]){return nums[mid];}

             if(mid==n-1 && nums[n-1]!= nums[n-2]){return nums[mid];}

           
            else if(nums[mid-1]!=nums[mid] && nums[mid]!=nums[mid+1] ){
                return nums[mid];
            }
            else if(mid%2==0){
                if(nums[mid-1]==nums[mid]){
                    end=mid-1;
                }
                else {st=mid+1;}
            }
            else if(mid%2!=0){
                if(nums[mid-1]==nums[mid]){
                    st=mid+1;
                }
                else if(nums[mid]==nums[mid+1]){end=mid-1;}
            }
        }
        return -1;
    }
};