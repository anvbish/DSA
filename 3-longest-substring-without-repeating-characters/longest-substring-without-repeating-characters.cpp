class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>st;
        int lp=0;
        int ans=0;
        for(int rp=0;rp<s.length();rp++){
            while(st.find(s[rp])!=st.end()){
                st.erase(s[lp]);
                lp++;
            }
            st.insert(s[rp]);
            ans=max(ans,rp-lp+1);

            
        }
        return ans;
    }
};