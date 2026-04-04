class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>temp;
        for(int i=0;i<nums.size();i++){
            int sq=nums[i]*nums[i];
            temp.push_back(sq);
        }
        sort(temp.begin(),temp.end());
        return temp;
    }
};