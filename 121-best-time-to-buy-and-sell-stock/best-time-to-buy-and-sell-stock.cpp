class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;
        int best=prices[0];
        for(int i=1;i<prices.size();i++){
            if(prices[i]>best){
                maxprofit=max(maxprofit,prices[i]-best);}
            else{
                    best=min(best,prices[i]);}
            }
        
        return maxprofit;
    }
};