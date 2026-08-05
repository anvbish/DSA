class Solution {
public:
    int characterReplacement(string s, int k) {
        int lp=0;
        int ans=0;
        int maxFreq=0;
        unordered_map<char,int>mp;

        for(int rp=0;rp<s.length();rp++){
            mp[s[rp]]++;
            maxFreq=max(maxFreq,mp[s[rp]]);

            while((rp-lp+1)-maxFreq>k){
                mp[s[lp]]--;
                lp++;
            }
            ans=max((rp-lp+1),ans);
        }
        return ans;
        
    }
};