class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int>st;
        int n=heights.size();
        int maxAr=0;
        for(int i=0;i<n;i++){
            while(!st.empty() && heights[st.top()]>heights[i]){
                int elem=st.top();
                st.pop();
            
            int nse=i;
            int pse=st.empty()?-1:st.top();
            maxAr=max(maxAr,heights[elem]*(nse-pse-1));
            }
        st.push(i);
        }
    while(!st.empty()){
        int nse=n;
        int elem=st.top();
        st.pop();
        int pse=st.empty()?-1:st.top();
        maxAr=max(maxAr,heights[elem]*(nse-pse-1));
        }  
        return maxAr; 
    }
};