class Solution {
public:
    int maxProfit(vector<int>& price) {
        int buy=price[0];
        int maxPrft=0;
        for(int i=1;i<price.size();i++){
            if(price[i]>buy){
                maxPrft=max(maxPrft,price[i]-buy);
            }
            else{
                buy=min(buy,price[i]);
            }
        }
        return maxPrft;
    }
};