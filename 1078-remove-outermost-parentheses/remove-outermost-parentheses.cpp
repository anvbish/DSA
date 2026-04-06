class Solution {
public:
    string removeOuterParentheses(string s) {
        int depth=0;
        string ans;
        for(char ch:s){
            if(ch=='('){
                if(depth>0){
                    ans=ans+ch;
                }
                depth++;
            }
            else{
                depth--;
                if(depth>0){
                    ans=ans+ch;
                }
            }
        }
        return ans;
    }
};