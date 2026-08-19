class Solution(object):
    def isPalindrome(self, s):
        lp=0
        rp=len(s)-1

        while(lp<=rp):
            if not s[lp].isalnum():
                lp+=1
                continue
            if not s[rp].isalnum():
                rp-=1
                continue
            if s[lp].lower()!=s[rp].lower():
                return False

            lp+=1
            rp-=1
        
        return True
        