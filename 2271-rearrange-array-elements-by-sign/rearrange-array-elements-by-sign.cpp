class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos;
        vector<int> neg;
        int n=nums.size();

        for(int i = 0; i < n; i++){
            if(nums[i] > 0)
                pos.push_back(nums[i]);
            else
                neg.push_back(nums[i]);
        }

        int idx = 0;
        int j = 0;

        while(j < n/2){
            nums[idx] = pos[j];
            nums[idx + 1] = neg[j];

            idx += 2;
            j++;
        }
        return nums;
        }
};