class Solution {
public:
    string removeKdigits(string nums, int k) {
        int n=nums.size();
        stack<char>st;
        for(int i=0;i<nums.size();i++){
            while(!st.empty() && k>0 && st.top()>nums[i]){
                st.pop();
                k--;
            }
            st.push(nums[i]);
        }
        while(!st.empty() && k>0){
            st.pop();
            k--;
        }
        if(st.empty())return "0";
        string res="";
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }
        while(res.size()>0 && res.back()=='0'){
            res.pop_back();
        }
        if(res.size()==0)return "0";
        reverse(res.begin(),res.end());
        return res;
    }
};