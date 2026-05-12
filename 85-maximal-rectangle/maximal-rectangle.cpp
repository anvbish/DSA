class Solution {
public:
    int largesthistogram(vector<int>& heights){
        stack<int>st;
        int maxAr=0;
        int n=heights.size();
        for(int i=0;i<n;i++){
            while(!st.empty() && heights[st.top()]>heights[i]){
                int elem=st.top();
                st.pop();
                int nse=i;
                int pse=st.empty()?-1:st.top();
                maxAr=max(maxAr, heights[elem]*(nse-pse-1));
            }
           st.push(i);
            
        }
         while(!st.empty()){
            int nse=n;
            int elem=st.top();
            st.pop();
            int pse=st.empty()?-1:st.top();
            maxAr=max(maxAr, heights[elem]*(nse-pse-1));
         }
         return maxAr;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        int maxAr=0;
        if (matrix.empty())return 0;
        int m=matrix[0].size();
        vector<int>heights(m,0);
        for(auto& rows:matrix){
            for(int j=0;j<m;j++){
                if(rows[j]=='0'){
                    heights[j]=0;
                }
                else{
                    heights[j]++;
                }
            }
         maxAr=max(maxAr,largesthistogram(heights));
        }
        return maxAr;
    }
};