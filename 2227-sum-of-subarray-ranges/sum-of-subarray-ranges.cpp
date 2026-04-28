#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findNSE(vector<int>& nums){
        int n = nums.size();
        vector<int> ans(n);
        stack<int> st;

        for(int i = n - 1; i >= 0; i--){
            while(!st.empty() && nums[st.top()] >= nums[i]){
                st.pop();
            }
            ans[i] = st.empty() ? n : st.top();
            st.push(i);
        }
        return ans;
    }

    vector<int> findNGE(vector<int>& nums){
        int n = nums.size();
        vector<int> ans(n);
        stack<int> st;

        for(int i = n - 1; i >= 0; i--){
            while(!st.empty() && nums[st.top()] <= nums[i]){
                st.pop();
            }
            ans[i] = st.empty() ? n : st.top();
            st.push(i);
        }
        return ans;
    }

    vector<int> findPSEE(vector<int>& nums){
        int n = nums.size();
        vector<int> ans(n);
        stack<int> st;

        for(int i = 0; i < n; i++){
            while(!st.empty() && nums[st.top()] > nums[i]){
                st.pop();
            }
            ans[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        return ans;
    }

    vector<int> findPGEE(vector<int>& nums){
        int n = nums.size();
        vector<int> ans(n);
        stack<int> st;

        for(int i = 0; i < n; i++){
            while(!st.empty() && nums[st.top()] < nums[i]){
                st.pop();
            }
            ans[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        return ans;
    }

    long long sumSubarrayMins(vector<int>& nums){
        int n = nums.size();
        vector<int> nse = findNSE(nums);
        vector<int> psee = findPSEE(nums);

        long long sum = 0;

        for(int i = 0; i < n; i++){
            long long left = i - psee[i];
            long long right = nse[i] - i;
            long long freq = left * right;
            sum += freq * nums[i];
        }
        return sum;
    }

    long long sumSubarrayMaxs(vector<int>& nums){
        int n = nums.size();
        vector<int> nge = findNGE(nums);
        vector<int> pgee = findPGEE(nums);

        long long sum = 0;

        for(int i = 0; i < n; i++){
            long long left = i - pgee[i];
            long long right = nge[i] - i;
            long long freq = left * right;
            sum += freq * nums[i];
        }
        return sum;
    }

    long long subArrayRanges(vector<int>& nums) {
        return sumSubarrayMaxs(nums) - sumSubarrayMins(nums);
    }
};