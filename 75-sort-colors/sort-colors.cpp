class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int count0=0,count1=0,count2=0;

        for(int i=0;i<n;i++){
            if (nums[i] == 0) {
                 count0++;
            }
            else if (nums[i] == 1) {
                count1++;
                    }
            else {
                count2++;
            }

        }
        int idx=0;
        for(int i=0;i<count0;i++){
            nums[idx++]=0;
        }
        for(int i=0;i<count1;i++){
            nums[idx++]=1;
        }
        for(int i=0;i<count2;i++){
            nums[idx++]=2;
        }

    
    }
};