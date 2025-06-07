class Solution {
public:
    int reverse(int x) {
        int revNo=0;
        while(x!=0){
            int digit=x%10;
        if(revNo>INT_MAX/10 || revNo < INT_MIN/10){
                return 0;
           }
            revNo=revNo*10+digit;
            x=x/10;
        }
       return revNo;
    }
};