class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int>need;
        unordered_map<char,int>want;
        if (s1.length() > s2.length())
        return false;
         for(char ch : s1){
            need[ch]++;
        }
        for(int i=0;i<s1.length();i++){
            want[s2[i]]++;
        }
        if(need==want)return true;
        int lp=0;
        int rp = s1.length();
        while(rp<s2.length()){
            want[s2[lp]]--;
            want[s2[rp]]++;
            if (want[s2[lp]] == 0){
            want.erase(s2[lp]);}
            lp++;
            rp++;
            if(need==want)return true;
        }
        return false;
    }
};