class Solution {
public:
    string reverseVowels(string s) {
        int st=0;
        int end=s.size()-1;
        while(st<=end){
            if(s[st]=='a'||s[st]=='e'||s[st]=='i'||s[st]=='o'||s[st]=='u'||
            s[st]=='A'||s[st]=='E'||s[st]=='I'||s[st]=='O'||s[st]=='U' ) 
            {
                if(s[end]=='a'||s[end]=='e'||s[end]=='i'||s[end]=='o'||s[end]=='u'||
            s[end]=='A'||s[end]=='E'||s[end]=='I'||s[end]=='O'||s[end]=='U'){
                swap(s[st],s[end]);
                st++;
                end--;
                }
                else{
                    end--;
                }
            
            }
            else{
                st++;
            }
            
        }
        return s;
    }
};