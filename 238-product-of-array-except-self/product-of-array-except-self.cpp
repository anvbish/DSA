class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);
        vector<int> pre(n,1);
        vector<int> suff(n,1);
        

    //prefix 
        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]*nums[i-1];
        }
    //suffix
        for(int i=n-2;i>=0;i--){
            suff[i]=suff[i+1]*nums[i+1];
        }
    //ans
        for(int i=0;i<n;i++){
            ans[i]=suff[i]*pre[i];
        }
        
        return ans;
    }
};