class Solution {
public:
    vector<int> findNSE(vector<int>& arr){
        int n=arr.size();
        vector<int>ans(n);
        stack<int>st;
        for(int i=n-1;i>=0;i--){
            int current=arr[i];

            while(!st.empty() && arr[st.top()]>=arr[i]){
                st.pop();
            }
            if(!st.empty()){
                ans[i]=st.top();
            }
            else{
                ans[i]=n;
            }
            st.push(i);
        }
        return ans;
    }

    vector<int> findPSEE(vector<int>& arr){
        int n=arr.size();
        vector<int>ans(n);
        stack<int>st;
        for(int i=0;i<n;i++){
            int current=arr[i];

            while(!st.empty() && arr[st.top()]>arr[i]){
                st.pop();
            }
            if(!st.empty()){
                ans[i]=st.top();
            }
            else{
                ans[i]=-1;
            }
            st.push(i);
        }
        return ans;
    }


    int sumSubarrayMins(vector<int>& arr) {
        int n=arr.size();
        vector<int>nse=findNSE(arr);
        vector<int>psee=findPSEE(arr);
        int mod=1e9+7;
        int sum=0;
        for(int i=0;i<n;i++){
            int left=i-psee[i];
            int right=nse[i]-i;
            long long freq=left*right*1LL;
            int val=(freq*arr[i]*1LL)%mod;
            sum=(sum+val)%mod;

        }
        return sum;
    }
};